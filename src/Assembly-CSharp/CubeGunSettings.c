
/* Void Destroy() */

void Assembly-CSharp.dll::CubeGunSettings::CubeGunSettings_Destroy
               (CubeGunSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).materialsController;
  if (pMVar1 != (MaterialsController *)0x0) {
    pUVar2 = (pMVar1->fields).materialsPop;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,MethodInfo__CubeGunSettings__Pop__,(MethodInfo *)0x0);
    pUVar4 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pUVar2 = (UnityAction *)0x0;
    if (pUVar4 != (UnityAction *)0x0) {
      if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar2 = pUVar4;
      }
      pUVar5 = (UnityAction_1_System_Byte___Class *)TypeInfo__UnityEngine__Events__UnityAction;
      if (pUVar2 == (UnityAction *)0x0) goto code_?;
    }
    (pMVar1->fields).materialsPop = pUVar2;
    pMVar1 = (this->fields).materialsController;
    if (pMVar1 != (MaterialsController *)0x0) {
      source = (pMVar1->fields).materialChange;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,MethodInfo__CubeGunSettings__MaterialChange_unsigned_char_,
                 MethodInfo__UnityEngine__Events__UnityAction<unsigned_char>__UnityAction_System__Object__void__
                );
      pUVar4 = (UnityAction *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)source,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pUVar2 = (UnityAction *)0x0;
      if (pUVar4 == (UnityAction *)0x0) {
code_?:
        (pMVar1->fields).materialChange = (UnityAction_1_System_Byte_ *)pUVar2;
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
        return;
      }
      if ((UnityAction_1_System_Byte___Class *)pUVar4->klass ==
          TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>) {
        pUVar2 = pUVar4;
      }
      pUVar5 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
      if (pUVar2 != (UnityAction *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?(0);
  pUVar4 = extraout_ECX;
  pUVar5 = (UnityAction_1_System_Byte___Class *)extraout_EDX;
code_?:
  func_?(pUVar4,pUVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize(Int32, MaterialsController) */

void Assembly-CSharp.dll::CubeGunSettings::CubeGunSettings_Initialize
               (CubeGunSettings *this,int32_t woID,MaterialsController *materialsController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).woID = woID;
  (this->fields).materialsController = materialsController;
  if (materialsController != (MaterialsController *)0x0) {
    MaterialsController::MaterialsController_ShowMaterialInventoryFirstPage
              (materialsController,(MethodInfo *)0x0);
    pUVar1 = (materialsController->fields).materialChange;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,MethodInfo__CubeGunSettings__MaterialChange_unsigned_char_,
               MethodInfo__UnityEngine__Events__UnityAction<unsigned_char>__UnityAction_System__Object__void__
              );
    pUVar3 = (UnityAction_1_System_Byte_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pUVar1 = (UnityAction_1_System_Byte_ *)0x0;
    if (pUVar3 != (UnityAction_1_System_Byte_ *)0x0) {
      if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>) {
        pUVar1 = pUVar3;
      }
      if (pUVar1 == (UnityAction_1_System_Byte_ *)0x0) goto code_?;
    }
    (materialsController->fields).materialChange = pUVar1;
    pUVar4 = (materialsController->fields).materialsPop;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,MethodInfo__CubeGunSettings__Pop__,(MethodInfo *)0x0);
    pUVar5 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar4,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pUVar4 = (UnityAction *)0x0;
    if (pUVar5 != (UnityAction *)0x0) {
      if (pUVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar4 = pUVar5;
      }
      if (pUVar4 == (UnityAction *)0x0) goto code_?;
    }
    (materialsController->fields).materialsPop = pUVar4;
    return;
  }
  func_?(0);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void MaterialChange(Byte) */

void Assembly-CSharp.dll::CubeGunSettings::CubeGunSettings_MaterialChange
               (CubeGunSettings *this,uint8_t materialId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = (PrefabPool *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_00,(this->fields).woID,(MethodInfo *)0x0);
    if (this_01 == (PrefabPool *)0x0) {
      return;
    }
    woData = (Dictionary_2_System_Object_System_Object_ *)
             PrefabPool::PrefabPool_get_MVBatteryPrefab(this_01,(MethodInfo *)0x0);
    if (woData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar1 = (Dictionary_2_System_String_Theme_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)woData,(Type *)StringLiteral_itemData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      value = (Theme *)func_?();
      if (pDVar1 != (Dictionary_2_System_String_Theme_ *)0x0) {
        bVar2 = (pDVar1->klass->_1).naturalAligment;
        bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        uVar4 = CONCAT11(bVar2,bVar3);
        uVar5 = (uint)uVar4 << 8;
        if ((bVar2 < bVar3) ||
           (uVar5 = CONCAT13(1,(uint3)uVar4 << 8),
           (Dictionary_2_System_Object_System_Object___Class *)
           (pDVar1->klass->_1).typeHierarchy[bVar3 - 1] !=
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          uVar5 = uVar5 & 0xffffff;
        }
        pDVar6 = (Dictionary_2_System_String_Theme_ *)0x0;
        if ((char)(uVar5 >> 0x18) != '\0') {
          pDVar6 = pDVar1;
        }
        if (pDVar6 == (Dictionary_2_System_String_Theme_ *)0x0) goto code_?;
        if (((byte)(uVar5 >> 0x10) < (byte)(uVar5 >> 8)) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar1->klass->_1).typeHierarchy[bVar3 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        pDVar6 = (Dictionary_2_System_String_Theme_ *)0x0;
        if (bVar7) {
          pDVar6 = pDVar1;
        }
        if (pDVar6 == (Dictionary_2_System_String_Theme_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  (pDVar6,StringLiteral_material,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        worldObjectID =
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
        if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
                    (this_02,(int32_t)worldObjectID,woData,(MethodInfo *)0x0);
          CubeGunSettings_Destroy(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Pop() */

void Assembly-CSharp.dll::CubeGunSettings::CubeGunSettings_Pop
               (CubeGunSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).materialsController;
  if (pMVar1 != (MaterialsController *)0x0) {
    pUVar2 = (pMVar1->fields).materialsPop;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,MethodInfo__CubeGunSettings__Pop__,(MethodInfo *)0x0);
    pUVar4 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pUVar2 = (UnityAction *)0x0;
    if (pUVar4 != (UnityAction *)0x0) {
      if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar2 = pUVar4;
      }
      pUVar5 = (UnityAction_1_System_Byte___Class *)TypeInfo__UnityEngine__Events__UnityAction;
      if (pUVar2 == (UnityAction *)0x0) goto code_?;
    }
    (pMVar1->fields).materialsPop = pUVar2;
    pMVar1 = (this->fields).materialsController;
    if (pMVar1 != (MaterialsController *)0x0) {
      source = (pMVar1->fields).materialChange;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,MethodInfo__CubeGunSettings__MaterialChange_unsigned_char_,
                 MethodInfo__UnityEngine__Events__UnityAction<unsigned_char>__UnityAction_System__Object__void__
                );
      pUVar4 = (UnityAction *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)source,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pUVar2 = (UnityAction *)0x0;
      if (pUVar4 == (UnityAction *)0x0) {
code_?:
        (pMVar1->fields).materialChange = (UnityAction_1_System_Byte_ *)pUVar2;
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
        return;
      }
      if ((UnityAction_1_System_Byte___Class *)pUVar4->klass ==
          TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>) {
        pUVar2 = pUVar4;
      }
      pUVar5 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
      if (pUVar2 != (UnityAction *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?(0);
  pUVar4 = extraout_ECX;
  pUVar5 = (UnityAction_1_System_Byte___Class *)extraout_EDX;
code_?:
  func_?(pUVar4,pUVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

