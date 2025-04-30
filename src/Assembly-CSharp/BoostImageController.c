
/* Image GetBoostVisualization(BoostType) */

Image * Assembly-CSharp.dll::BoostImageController::BoostImageController_GetBoostVisualization
                  (BoostImageController *this,BoostType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BoostType);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostImageController::BoosterImageDef>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostImageController::BoosterImageDef>__get_Item_int_
                   );
    func_?(&StringLiteral_Boost_type__);
    func_?(&StringLiteral_No_image_found_for_boost_type_);
    cRam_? = '\x01';
  }
  index = 0;
  this_00 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
            (this->fields).boosterImages;
  do {
    if (this_00 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      pIVar2 = (Image *)(*pcVar1)();
      return pIVar2;
    }
    if ((this_00->fields)._size <= index) {
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0)
      ;
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Boost_type__,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar3,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_No_image_found_for_boost_type_,(MethodInfo *)0x0);
      return (Image *)0x0;
    }
    if (this_00 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
    goto code_?;
    XVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
            XmlSchemaObjectTable+XmlSchemaObjectEntry]::
            List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                      (this_00,index,
                       MethodInfo__System__Collections__Generic__List<BoostImageController::BoosterImageDef>__get_Item_int_
                      );
    this_00 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
              (this->fields).boosterImages;
    if (XVar4.qname == (XmlQualifiedName *)type) {
      if (this_00 != (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) {
        XVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<BoostImageController::BoosterImageDef>__get_Item_int_
                          );
        return (Image *)XVar4.xso;
      }
      goto code_?;
    }
    index = index + 1;
  } while( true );
}

