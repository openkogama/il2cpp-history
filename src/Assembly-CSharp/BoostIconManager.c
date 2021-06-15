
/* GameObject CreateBoosterIcon(BoostType) */

GameObject *
Assembly-CSharp.dll::BoostIconManager::BoostIconManager_CreateBoosterIcon
          (BoostIconManager *this,BoostType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).boosterIconPrefabs;
  do {
    if (pLVar1 == (List_1_BoosterIcon_ *)0x0) {
code_?:
      func_?(0);
      pcVar2 = (code *)swi(3);
      pGVar3 = (GameObject *)(*pcVar2)();
      return pGVar3;
    }
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<BoosterIcon>__get_Count__);
    if ((int)pOVar4 <= index) {
      piVar5 = (int *)func_?(TypeInfo__BoostType,&type);
      if (piVar5 != (int *)0x0) {
        pSVar6 = (String *)(**(code **)(*piVar5 + 0xd8))(piVar5,*(undefined4 *)(*piVar5 + 0xdc));
        pBVar7 = (BoostType__Enum *)func_?(piVar5);
        type = *pBVar7;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar6 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_BoostIconManager_couldn_t_find_i,pSVar6,
                            StringLiteral__boost,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pSVar6,(MethodInfo *)0x0);
        return (GameObject *)0x0;
      }
      goto code_?;
    }
    pLVar1 = (this->fields).boosterIconPrefabs;
    if (pLVar1 == (List_1_BoosterIcon_ *)0x0) goto code_?;
    BVar8 = mscorlib.dll::System::Collections::Generic::List`1[BoosterIcon]::
            List_1_BoosterIcon__get_Item
                      (pLVar1,index,
                       MethodInfo__System__Collections__Generic__List<BoosterIcon>__get_Item_int_);
    pLVar1 = (this->fields).boosterIconPrefabs;
    if (BVar8.type == type) {
      if (pLVar1 != (List_1_BoosterIcon_ *)0x0) {
        BVar8 = mscorlib.dll::System::Collections::Generic::List`1[BoosterIcon]::
                List_1_BoosterIcon__get_Item
                          (pLVar1,index,
                           MethodInfo__System__Collections__Generic__List<BoosterIcon>__get_Item_int_
                          );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        pXVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           ((XpBoostParticlePreviewer *)BVar8.icon,
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                           );
        return (GameObject *)pXVar9;
      }
      goto code_?;
    }
    index = index + 1;
  } while( true );
}

