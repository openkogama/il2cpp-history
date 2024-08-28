
/* GameObject CreateBoosterIcon(BoostType) */

GameObject *
Assembly-CSharp.dll::BoostIconManager::BoostIconManager_CreateBoosterIcon
          (BoostIconManager *this,BoostType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BoostType);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__List<BoosterIcon>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<BoosterIcon>__get_Item_int_);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_BoostIconManager_couldn_t_find_i);
    func_?(&StringLiteral__boost);
    cRam_? = '\x01';
  }
  index = 0;
  this_00 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
            (this->fields).boosterIconPrefabs;
  do {
    if (this_00 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      pGVar2 = (GameObject *)(*pcVar1)();
      return pGVar2;
    }
    if ((this_00->fields)._size <= index) {
      pBStack_3 = TypeInfo__BoostType;
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pBStack_3,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_BoostIconManager_couldn_t_find_i,pSVar4,StringLiteral__boost
                          ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar4,(MethodInfo *)0x0);
      return (GameObject *)0x0;
    }
    if (this_00 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
    goto code_?;
    XVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
            XmlSchemaObjectTable+XmlSchemaObjectEntry]::
            List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                      (this_00,index,
                       MethodInfo__System__Collections__Generic__List<BoosterIcon>__get_Item_int_);
    this_00 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
              (this->fields).boosterIconPrefabs;
    if (XVar5.qname == (XmlQualifiedName *)type) {
      if (this_00 != (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) {
        XVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<BoosterIcon>__get_Item_int_
                          );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pGVar2 = (GameObject *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)XVar5.xso,
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                           );
        return pGVar2;
      }
      goto code_?;
    }
    index = index + 1;
  } while( true );
}

