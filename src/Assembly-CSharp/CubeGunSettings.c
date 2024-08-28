
/* Void Destroy() */

void Assembly-CSharp.dll::CubeGunSettings::CubeGunSettings_Destroy
               (CubeGunSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__CubeGunSettings__MaterialChange_unsigned_char_);
    func_?(&MethodInfo__CubeGunSettings__Pop__);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).materialsController;
  if (pMVar1 == (MaterialsController *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pUVar2 = (pMVar1->fields).materialsPop;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__CubeGunSettings__Pop__,(MethodInfo *)0x0);
    pUVar2 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pUVar2 == (UnityAction *)0x0) {
      (pMVar1->fields).materialsPop = (UnityAction *)0x0;
code_?:
      func_?();
      pMVar1 = (this->fields).materialsController;
      if (pMVar1 == (MaterialsController *)0x0) goto code_?;
      source = (pMVar1->fields).materialChange;
      this_01 = (UnityAction_1_System_Int32Enum_ *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,(Object *)this,MethodInfo__CubeGunSettings__MaterialChange_unsigned_char_,
                 (MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (pMVar1->fields).materialChange = (UnityAction_1_System_Byte_ *)0x0;
code_?:
        func_?();
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
        return;
      }
      pMVar4 = (MethodInfo_1 *)func_?();
      if (pMVar4 != (MethodInfo_1 *)0x0) {
        (pDVar3->fields).original_method_info = pMVar4;
        iVar5 = func_?();
        if (iVar5 != 0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    pUVar6 = (UnityAction *)0x0;
    if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar6 = pUVar2;
    }
    if (pUVar6 == (UnityAction *)0x0) goto code_?;
    (pMVar1->fields).materialsPop = pUVar6;
    pUVar6 = (UnityAction *)0x0;
    if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar6 = pUVar2;
    }
    if (pUVar6 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize(Int32, MaterialsController) */

void Assembly-CSharp.dll::CubeGunSettings::CubeGunSettings_Initialize
               (CubeGunSettings *this,int32_t woID,MaterialsController *materialsController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__CubeGunSettings__MaterialChange_unsigned_char_);
    func_?(&MethodInfo__CubeGunSettings__Pop__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  (this->fields).woID = woID;
  ppMVar1 = &(this->fields).materialsController;
  *ppMVar1 = materialsController;
  func_?(ppMVar1,materialsController);
  if (materialsController == (MaterialsController *)0x0) {
    func_?();
code_?:
    func_?();
  }
  else {
    MaterialsController::MaterialsController_ShowMaterialInventoryFirstPage
              (materialsController,(MethodInfo *)0x0);
    pUVar2 = (materialsController->fields).materialChange;
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,MethodInfo__CubeGunSettings__MaterialChange_unsigned_char_,
               (MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (materialsController->fields).materialChange = (UnityAction_1_System_Byte_ *)0x0;
code_?:
      func_?();
      pUVar4 = (materialsController->fields).materialsPop;
      ppUVar5 = &(materialsController->fields).materialsPop;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)0x0,MethodInfo__CubeGunSettings__Pop__,(MethodInfo *)0x0);
      pUVar4 = (UnityAction *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar4,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pUVar4 == (UnityAction *)0x0) {
        *ppUVar5 = (UnityAction *)0x0;
        func_?();
        return;
      }
      pUVar6 = (UnityAction *)0x0;
      if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar6 = pUVar4;
      }
      if (pUVar6 != (UnityAction *)0x0) {
        *ppUVar5 = pUVar6;
        pUVar6 = (UnityAction *)0x0;
        if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar6 = pUVar4;
        }
        if (pUVar6 != (UnityAction *)0x0) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
    pUVar2 = (UnityAction_1_System_Byte_ *)func_?();
    if (pUVar2 == (UnityAction_1_System_Byte_ *)0x0) goto code_?;
    (materialsController->fields).materialChange = pUVar2;
    iVar7 = func_?();
    if (iVar7 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void MaterialChange(Byte) */

void Assembly-CSharp.dll::CubeGunSettings::CubeGunSettings_MaterialChange
               (CubeGunSettings *this,uint8_t materialId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&StringLiteral_material);
    func_?(&StringLiteral_itemData);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,(this->fields).woID,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObject *)0x0) {
      return;
    }
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(pMVar1->fields).data;
    if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      iVar2 = unaff_EBX.m_Index;
      unaff_EBX = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_00,(Object *)StringLiteral_itemData,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      iVar2 = CONCAT13(materialId,(int3)iVar2);
      value = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
      if (unaff_EBX.m_Index != 0) {
        bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if ((*(byte *)(*(int *)unaff_EBX.m_Index + 0xb8) < bVar3) ||
           (*(Dictionary_2_System_Object_System_Object___Class **)
             (*(int *)(*(int *)unaff_EBX.m_Index + 100) + -4 + (uint)bVar3 * 4) !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_EBX.m_Index,
                   (Object *)StringLiteral_material,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        unaff_EBX.m_Index = iVar2;
        this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
                    (this_02,(pMVar1->fields).id,
                     (Dictionary_2_System_Object_System_Object_ *)this_00,(MethodInfo *)0x0);
          CubeGunSettings_Destroy(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pDVar4 = extraout_EDX;
code_?:
  func_?(unaff_EBX.m_Index,pDVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Pop() */

void Assembly-CSharp.dll::CubeGunSettings::CubeGunSettings_Pop
               (CubeGunSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__CubeGunSettings__MaterialChange_unsigned_char_);
    func_?(&MethodInfo__CubeGunSettings__Pop__);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).materialsController;
  if (pMVar1 == (MaterialsController *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pUVar2 = (pMVar1->fields).materialsPop;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__CubeGunSettings__Pop__,(MethodInfo *)0x0);
    pUVar2 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pUVar2 == (UnityAction *)0x0) {
      (pMVar1->fields).materialsPop = (UnityAction *)0x0;
code_?:
      func_?();
      pMVar1 = (this->fields).materialsController;
      if (pMVar1 == (MaterialsController *)0x0) goto code_?;
      source = (pMVar1->fields).materialChange;
      this_01 = (UnityAction_1_System_Int32Enum_ *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,(Object *)this,MethodInfo__CubeGunSettings__MaterialChange_unsigned_char_,
                 (MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (pMVar1->fields).materialChange = (UnityAction_1_System_Byte_ *)0x0;
code_?:
        func_?();
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
        return;
      }
      pMVar4 = (MethodInfo_1 *)func_?();
      if (pMVar4 != (MethodInfo_1 *)0x0) {
        (pDVar3->fields).original_method_info = pMVar4;
        iVar5 = func_?();
        if (iVar5 != 0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    pUVar6 = (UnityAction *)0x0;
    if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar6 = pUVar2;
    }
    if (pUVar6 == (UnityAction *)0x0) goto code_?;
    (pMVar1->fields).materialsPop = pUVar6;
    pUVar6 = (UnityAction *)0x0;
    if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar6 = pUVar2;
    }
    if (pUVar6 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

