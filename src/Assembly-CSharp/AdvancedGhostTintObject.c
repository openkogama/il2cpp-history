
/* Void TeamTint(MVTeam) */

void Assembly-CSharp.dll::AdvancedGhostTintObject::AdvancedGhostTintObject_TeamTint
               (AdvancedGhostTintObject *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = (IEventSystemHandler__Class *)0x0;
  pLVar1 = (this->fields).teamIrisObjects;
  if (pLVar1 != (List_1_OculusTeamGameObject_ *)0x0) {
    while( true ) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Count__
                         );
      if ((int)pOVar2 <= (int)index) {
        return;
      }
      pLVar1 = (this->fields).teamIrisObjects;
      if (((pLVar1 == (List_1_OculusTeamGameObject_ *)0x0) ||
          (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                               (int32_t)index,
                               MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                              ), pIVar3 == (IEventSystemHandler *)0x0)) ||
         ((GameObject *)pIVar3[1].monitor == (GameObject *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pIVar3[1].monitor,0,(MethodInfo *)0x0);
      pLVar1 = (this->fields).teamIrisObjects;
      if ((pLVar1 == (List_1_OculusTeamGameObject_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                              (int32_t)index,
                              MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) break;
      if (pIVar3[1].klass == index) {
        pLVar1 = (this->fields).teamIrisObjects;
        if (((pLVar1 == (List_1_OculusTeamGameObject_ *)0x0) ||
            (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                 (int32_t)index,
                                 MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                                ), pIVar3 == (IEventSystemHandler *)0x0)) ||
           ((GameObject *)pIVar3[1].monitor == (GameObject *)0x0)) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)pIVar3[1].monitor,1,(MethodInfo *)0x0);
      }
      pLVar1 = (this->fields).teamIrisObjects;
      index = (IEventSystemHandler__Class *)((int)&(index->_0).image + 1);
      if (pLVar1 == (List_1_OculusTeamGameObject_ *)0x0) break;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Tint(Color) */

void Assembly-CSharp.dll::AdvancedGhostTintObject::AdvancedGhostTintObject_Tint
               (AdvancedGhostTintObject *this,Color c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_Attempting_to_tint_oculus_object,(MethodInfo *)0x0);
  return;
}

