
/* Void AddPreviewBoxesToTeleporters() */

void Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup_AddPreviewBoxesToTeleporters
               (MVTeleportGroup *this,MethodInfo *method)

{
  pMVar1 = (this->fields).teleporter1;
  if (pMVar1 != (MVTeleporter *)0x0) {
    (*(code *)(pMVar1->klass->vtable).AddPreviewBox.method)
              (pMVar1,(pMVar1->klass->vtable).AddSelectionBox.methodPtr);
    pMVar1 = (this->fields).teleporter2;
    if (pMVar1 != (MVTeleporter *)0x0) {
      (*(code *)(pMVar1->klass->vtable).AddPreviewBox.method)
                (pMVar1,(pMVar1->klass->vtable).AddSelectionBox.methodPtr);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup_Initialize
               (MVTeleportGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pDVar1 = (Dictionary_2_System_Type_Pool_ *)
           PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if ((pDVar1 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
     (pDVar1 = (Dictionary_2_System_Type_Pool_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (pDVar1,(Type *)StringLiteral_BlueprintData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pDVar1 == (Dictionary_2_System_Type_Pool_ *)0x0)) goto code_?;
  bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment;
  if (((pDVar1->klass->_1).naturalAligment < bVar2) ||
     ((Dictionary_2_System_Object_System_Object___Class *)
      (pDVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  this_01 = (Dictionary_2_System_Type_Pool_ *)0x0;
  if (bVar3) {
    this_01 = pDVar1;
  }
  if (this_01 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
  pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     (this_01,(Type *)StringLiteral_ChildrenMap,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_TeleportGroup_does_not_have_any_,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_03 != (MVWorldObjectClientManager *)0x0) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                (this_03,(this->fields)._._._._.id,(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?();
  }
  else {
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar4->klass->_1).naturalAligment < bVar2) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar4->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    table = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar3) {
      table = pDVar4;
    }
    if (table != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pMVar5 = MVTeleportGroup_RetrieveTeleporter
                         (this,table,StringLiteral_teleporter1,(MethodInfo *)0x0);
      (this->fields).teleporter1 = pMVar5;
      pMVar5 = MVTeleportGroup_RetrieveTeleporter
                         (this,table,StringLiteral_teleporter2,(MethodInfo *)0x0);
      (this->fields).teleporter2 = pMVar5;
      if ((this->fields).teleporter1 == (MVTeleporter *)0x0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Missing_teleporter_1,(MethodInfo *)0x0);
      }
      if ((this->fields).teleporter2 == (MVTeleporter *)0x0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Missing_teleporter_2,(MethodInfo *)0x0);
      }
      pMVar5 = (this->fields).teleporter1;
      if (pMVar5 == (MVTeleporter *)0x0) {
        return;
      }
      pMVar6 = (this->fields).teleporter2;
      if (pMVar6 == (MVTeleporter *)0x0) {
        return;
      }
      (pMVar5->fields).target = pMVar6;
      pMVar5 = (this->fields).teleporter2;
      if (pMVar5 != (MVTeleporter *)0x0) {
        (pMVar5->fields).target = (this->fields).teleporter1;
        pMVar5 = (this->fields).teleporter1;
        if (pMVar5 != (MVTeleporter *)0x0) {
          uVar7 = *(undefined4 *)((int)&(pMVar5->fields)._._.interactionFlags + 4);
          piVar8 = &(pMVar5->fields)._._.interactionFlags;
          *(uint *)piVar8 = (uint)*piVar8 | 8;
          *(undefined4 *)((int)&(pMVar5->fields)._._.interactionFlags + 4) = uVar7;
          pMVar5 = (this->fields).teleporter2;
          if (pMVar5 != (MVTeleporter *)0x0) {
            uVar7 = *(undefined4 *)((int)&(pMVar5->fields)._._.interactionFlags + 4);
            piVar8 = &(pMVar5->fields)._._.interactionFlags;
            *(uint *)piVar8 = (uint)*piVar8 | 8;
            *(undefined4 *)((int)&(pMVar5->fields)._._.interactionFlags + 4) = uVar7;
            uVar9 = (uint)(this->fields)._._._.interactionFlags;
            uVar7 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
            if ((uVar9 & 0x20000) == 0) {
code_?:
              this_00 = (this->fields)._._._.gameObject;
              *(uint *)&(this->fields)._._._.interactionFlags = uVar9 | 0x40;
              *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar7;
              if ((this_00 != (GameObject *)0x0) &&
                 (this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_GetComponent_47
                                      (this_00,
                                       TeleportGroup_MethodInfo__UnityEngine__GameObject__GetComponent<TeleportGroup>__
                                      ), this_02 != (UseInteractorHandler *)0x0)) {
                TeleportGroup::TeleportGroup_Initialize
                          ((TeleportGroup *)this_02,this,(MethodInfo *)0x0);
                return;
              }
            }
            else {
              pMVar5 = (this->fields).teleporter1;
              if (pMVar5 != (MVTeleporter *)0x0) {
                (*(code *)(pMVar5->klass->vtable).AddPreviewBox.method)();
                pMVar5 = (this->fields).teleporter2;
                if (pMVar5 != (MVTeleporter *)0x0) {
                  (*(code *)(pMVar5->klass->vtable).AddPreviewBox.method)();
                  pMVar5 = (this->fields).teleporter1;
                  pSVar10 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                           NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                     ((NamedThemeAttribute_1_UnityEngine_Color_ *)this,
                                      (MethodInfo *)0x0);
                  if (pMVar5 != (MVTeleporter *)0x0) {
                    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeId
                              ((RuntimePrototypeCubeModel *)pMVar5,(int32_t)pSVar10,(MethodInfo *)0x0
                              );
                    pMVar5 = (this->fields).teleporter2;
                    pSVar10 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)this,
                                        (MethodInfo *)0x0);
                    if (pMVar5 != (MVTeleporter *)0x0) {
                      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeId
                                ((RuntimePrototypeCubeModel *)pMVar5,(int32_t)pSVar10,
                                 (MethodInfo *)0x0);
                      pMVar5 = (this->fields).teleporter1;
                      if (pMVar5 != (MVTeleporter *)0x0) {
                        uVar7 = *(undefined4 *)((int)&(pMVar5->fields)._._.interactionFlags + 4);
                        piVar8 = &(pMVar5->fields)._._.interactionFlags;
                        *(uint *)piVar8 = (uint)*piVar8 | 0x20000;
                        *(undefined4 *)((int)&(pMVar5->fields)._._.interactionFlags + 4) = uVar7;
                        pMVar5 = (this->fields).teleporter2;
                        if (pMVar5 != (MVTeleporter *)0x0) {
                          uVar7 = *(undefined4 *)((int)&(pMVar5->fields)._._.interactionFlags + 4);
                          piVar8 = &(pMVar5->fields)._._.interactionFlags;
                          *(uint *)piVar8 = (uint)*piVar8 | 0x20000;
                          *(undefined4 *)((int)&(pMVar5->fields)._._.interactionFlags + 4) = uVar7;
                          uVar9 = (uint)(this->fields)._._._.interactionFlags;
                          uVar7 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
                          goto code_?;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* MVTeleporter RetrieveTeleporter(Dictionary`2[System.Object,System.Object], String) */

MVTeleporter *
Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup_RetrieveTeleporter
          (MVTeleportGroup *this,Dictionary_2_System_Object_System_Object_ *table,String *id,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (table != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)table,id,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return (MVTeleporter *)0x0;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)table,(Type *)id,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((this_00 != (MVWorldObjectClientManager *)0x0) && (pPVar2 != (Pool *)0x0)) {
      if ((pPVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar3 = (int32_t *)func_?();
        pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_00,*piVar3,(MethodInfo *)0x0);
        pMVar5 = TypeInfo__MVTeleporter;
        if (pMVar4 == (MVWorldObject *)0x0) {
          return (MVTeleporter *)0x0;
        }
        pMStack6 = TypeInfo__MVTeleporter;
        pMStack7 = pMVar4;
        iVar8 = func_?();
        if (iVar8 == 0) {
          return (MVTeleporter *)0x0;
        }
        pMStack6 = pMVar5;
        pMStack7 = pMVar4;
        pMVar9 = (MVTeleporter *)func_?();
        return pMVar9;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  pMVar9 = (MVTeleporter *)(*pcVar10)();
  return pMVar9;
}


/* Void SetWorldObjectToPurchased() */

void Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup_SetWorldObjectToPurchased
               (MVTeleportGroup *this,MethodInfo *method)

{
  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeId
            ((RuntimePrototypeCubeModel *)this,0,(MethodInfo *)0x0);
  uVar1 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
  piVar2 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar2 = (uint)*piVar2 & 0xfffdffff;
  *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar1;
  (*(code *)(this->klass->vtable).RemovePreviewBox.method)
            (this,(this->klass->vtable).HideConnectors.methodPtr);
  pMVar3 = (this->fields).teleporter1;
  if (pMVar3 != (MVTeleporter *)0x0) {
    (*(code *)(pMVar3->klass->vtable).SetWorldObjectToPurchased.method)(pMVar3);
    pMVar3 = (this->fields).teleporter2;
    if (pMVar3 != (MVTeleporter *)0x0) {
      (*(code *)(pMVar3->klass->vtable).SetWorldObjectToPurchased.method)(pMVar3);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVTeleportGroup(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup__ctor
               (MVTeleportGroup *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    prefabObject = (GameObject *)
                   TriggerCube::TriggerCube_get_InputSignalReceiver
                             ((TriggerCube *)this_00,(MethodInfo *)0x0);
    MVBlueprintBase::MVBlueprintBase__ctor_2
              ((MVBlueprintBase *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup_get_DocumentationType
          (MVTeleportGroup *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Teleporter;
}


/* MVTeleporter get_Teleporter2() */

MVTeleporter *
Assembly-CSharp.dll::MVTeleportGroup::MVTeleportGroup_get_Teleporter2
          (MVTeleportGroup *this,MethodInfo *method)

{
  return (this->fields).teleporter2;
}

