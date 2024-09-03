
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::SpawnPointSettings::SpawnPointSettings_Initialize
               (SpawnPointSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__MVSpawnPoint);
    func_?(&StringLiteral_onlyFirstSpawn);
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_02 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_02,woID,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObject *)0x0) {
      if (((pMVar1->klass->_1).naturalAligment < (TypeInfo__MVSpawnPoint->_1).naturalAligment) ||
         ((MVSpawnPoint__Class *)
          (pMVar1->klass->_1).typeHierarchy[(TypeInfo__MVSpawnPoint->_1).naturalAligment - 1] !=
          TypeInfo__MVSpawnPoint)) {
        func_?(pMVar1,TypeInfo__MVSpawnPoint);
      }
      else {
        woID = (pMVar1->fields).id;
        pSVar2 = (this->fields).settingsBase;
        documentationType =
             (*(code *)pMVar1->klass[1]._1.thread_static_fields_size)
                       (pMVar1,pMVar1->klass[1]._1.thread_static_fields_offset);
        if (pSVar2 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_Initialize
                    (pSVar2,woID,root,documentationType,(MethodInfo *)0x0);
          this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                    (pMVar1->fields).data;
          if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
            bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                              (this_00,(Object *)StringLiteral_onlyFirstSpawn,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              );
            if (bVar3 == 0) {
              woID = woID & 0xffffff;
              pOVar4 = (Object *)func_?(TypeInfo__System__Boolean,(int)&woID + 3);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)this_00,
                         (Object *)StringLiteral_onlyFirstSpawn,pOVar4,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pSVar2 = (this->fields).settingsBase;
              pOVar4 = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffffb);
              if (pSVar2 == (SettingsBase *)0x0) goto code_?;
              SettingsBase::SettingsBase_OnSettingChanged
                        (pSVar2,StringLiteral_onlyFirstSpawn,pOVar4,(MethodInfo *)0x0);
            }
            this_01 = (this->fields).toggle;
            TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (this_00,(Object *)StringLiteral_onlyFirstSpawn,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
            uVar6 = CONCAT44(TypeInfo__System__Boolean,TVar5.m_Index);
            if ((this_01 != (SettingsToggle *)0x0) && (TVar5.m_Index != 0)) {
              if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) ==
                  (TypeInfo__System__Boolean->_0).element_class) {
                pbVar7 = (bool *)func_?(TVar5.m_Index);
                SettingsToggle::SettingsToggle_Initialize
                          (this_01,StringLiteral_onlyFirstSpawn,*pbVar7,(MethodInfo *)0x0);
                return;
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  uVar6 = func_?();
code_?:
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

