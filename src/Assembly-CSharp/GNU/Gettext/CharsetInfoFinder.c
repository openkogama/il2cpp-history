
/* Boolean OnEntry(String, String, Boolean, String[], String, String[], String, String[], String) */

bool Assembly-CSharp.dll::GNU::Gettext::CharsetInfoFinder::CharsetInfoFinder_OnEntry
               (CharsetInfoFinder *this,String *msgid,String *msgidPlural,bool hasPlural,
               String__Array *translations,String *flags,String__Array *references,String *comment,
               String__Array *autocomments,String *msgctxt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__Catalog);
    func_?(&StringLiteral_CHARSET);
    func_?(&StringLiteral_iso_8859_1);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(msgid,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 1;
  }
  this_00 = (Catalog *)func_?(TypeInfo__GNU__Gettext__Catalog);
  if (this_00 != (Catalog *)0x0) {
    Catalog::Catalog__ctor(this_00,(MethodInfo *)0x0);
    if (translations != (String__Array *)0x0) {
      if (translations->max_length != 0) {
        Catalog::Catalog_ParseHeaderString(this_00,translations->vector[0],(MethodInfo *)0x0);
        pSRam0000000c = (this_00->fields).Charset;
        func_?();
        bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (pSRam0000000c,StringLiteral_CHARSET,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          pSRam0000000c = StringLiteral_iso_8859_1;
          func_?();
        }
        return 0;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* CharsetInfoFinder(String) */

void Assembly-CSharp.dll::GNU::Gettext::CharsetInfoFinder::CharsetInfoFinder__ctor
               (CharsetInfoFinder *this,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__CatalogParser);
    func_?(&StringLiteral_iso_8859_1);
    cRam_? = '\x01';
  }
  encoding = mscorlib.dll::System::Text::Encoding::Encoding_GetEncoding_2
                       (StringLiteral_iso_8859_1,(MethodInfo *)0x0);
  if ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GNU__Gettext__CatalogParser);
  }
  CatalogParser::CatalogParser__ctor((CatalogParser *)this,text,encoding,(MethodInfo *)0x0);
  (this->fields).charset = StringLiteral_iso_8859_1;
  func_?(&(this->fields).charset,StringLiteral_iso_8859_1);
  return;
}

