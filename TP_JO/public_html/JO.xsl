<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
    <xsl:output method="html"/>

<xsl:template match="tableau">
        <link href="JO2016.css" type="text/css" rel="stylesheet" />
        <html>
            <head>
                <title>JO</title>
            </head>
            <body>
                <table>
                    
                    <tr>
                        <th>Pays</th>
                        <th>Or</th>
                        <th>Argent</th>
                        <th>Bronze</th>                     
                    </tr>
                     <xsl:apply-templates />  
                   
                </table>
            </body>
        </html>
    </xsl:template>

  <xsl:template match="ligne">
        <tr>
          <xsl:apply-templates />  
          </tr>
    </xsl:template>
    
    <xsl:template match="pays">
            <td> <xsl:value-of select=" @nomDePays"/></td>
            <xsl:apply-templates />  
    </xsl:template>
 
      <xsl:template match="medaille">
           <xsl:choose>
            <xsl:when test="@TypeDeMedaille ='OR'">
                <td class="OR"> 
                    <xsl:apply-templates/>
                </td>
            </xsl:when>           
            <xsl:when test="@TypeDeMedaille ='ARGENT'">
                <td class="ARGENT"> 
                    <xsl:apply-templates/>
                </td>
            </xsl:when>            
            <xsl:when test="@TypeDeMedaille ='BRONZE'">
                <td class="BRONZE"> 
                    <xsl:apply-templates/>
                </td>
            </xsl:when>               
        </xsl:choose>
      </xsl:template>
</xsl:stylesheet>
