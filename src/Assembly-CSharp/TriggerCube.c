
/* Void Callback(Boolean, Boolean, LogicObjectManager) */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_Callback
               (TriggerCube *this,bool b,bool wasHot,LogicObjectManager *logicObjectManager,
               MethodInfo *method)

{
  this_00 = (this->fields).outputSignalTransmitter;
  if (this_00 != (OutputSignalTransmitter *)0x0) {
    OutputSignalTransmitter::OutputSignalTransmitter_Send
              (this_00,(this->fields).isDown,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean DoEnter(Int32) */

bool Assembly-CSharp.dll::TriggerCube::TriggerCube_DoEnter
               (TriggerCube *this,int32_t instigator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (instigator != -1) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                (this_00,(this->fields)._._._.id,instigator,(MethodInfo *)0x0);
      return 1;
    }
    uVar1 = func_?(&stack0xfffffff4);
    func_?(uVar1);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_Trigger_cube_entered_by_object_w,(MethodInfo *)0x0);
  return 0;
}


/* Void Initialize() */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_Initialize(TriggerCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__System__Func<int,_bool>);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    func_?(&TypeInfo__OutputSignalTransmitter);
    func_?(&TypeInfo__TeamRequirement);
    func_?(&MethodInfo__TriggerCube__Callback_bool__bool__LogicObjectManager_);
    func_?(&MethodInfo__TriggerCube__DoEnter_int_);
    func_?(&
                    MethodInfo__TriggerCube__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__TriggerCube__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    func_?(&TypeInfo__UseInteractor);
    func_?(&StringLiteral_triggerBoxState);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pTVar1 = (this->fields).objPrefab;
  if (pTVar1 != (TriggerCubePrefab *)0x0) {
    unaff_ESI = (pTVar1->fields).triggerBoxEvents;
    pUVar2 = (UnityAction_2_System_Object_System_Object_ *)
             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar2,(Object *)this,
               MethodInfo__TriggerCube__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (unaff_ESI != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                (unaff_ESI,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
      pTVar1 = (this->fields).objPrefab;
      if (pTVar1 != (TriggerCubePrefab *)0x0) {
        pTVar3 = (pTVar1->fields).triggerBoxEvents;
        pUVar2 = (UnityAction_2_System_Object_System_Object_ *)
                 func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar2,(Object *)this,
                   MethodInfo__TriggerCube__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        unaff_ESI = (TriggerBoxEvents *)0x0;
        if (pTVar3 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                    (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
          this_00 = (Action_3_Int32_Int32_ByteEnum_ *)
                    func_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
          mscorlib.dll::System::Action`3[Int32,Int32,ByteEnum]::Action_3_Int32_Int32_ByteEnum___ctor
                    (this_00,(Object *)this,
                     MethodInfo__TriggerCube__Callback_bool__bool__LogicObjectManager_,
                     (MethodInfo *)0x0);
          pIVar4 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                             ((MVWorldObject *)this,1,
                              (Action_3_Boolean_Boolean_LogicObjectManager_ *)this_00,
                              (MethodInfo *)0x0);
          (this->fields)._InputSignalReceiver_k__BackingField = pIVar4;
          func_?(&(this->fields)._InputSignalReceiver_k__BackingField,pIVar4);
          woId = (this->fields)._._._.id;
          this_01 = (WorldObjectClientRef_1_System_Object_ *)
                    func_?(TypeInfo__OutputSignalTransmitter);
          WorldObjectClientRef`1[System::Object]::WorldObjectClientRef_1_System_Object___ctor
                    (this_01,woId,(MethodInfo *)0x0);
          (this->fields).outputSignalTransmitter = (OutputSignalTransmitter *)this_01;
          func_?();
          hashtable = (Dictionary_2_System_Object_System_Object_ *)
                      (*(code *)(this->klass->vtable).get_RunTimeData.method)();
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          unaff_ESI = (TriggerBoxEvents *)
                      Extensions::Extensions_GetObscuredType
                                (hashtable,StringLiteral_triggerBoxState,(MethodInfo *)0x0);
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
          }
          if (unaff_ESI != (TriggerBoxEvents *)0x0) {
            pOVar5 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
            if ((unaff_ESI->klass->_0).element_class !=
                (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class)
            goto code_?;
            pOVar6 = (ObscuredBool *)func_?(unaff_ESI);
            bVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool
                    ::ObscuredBool_op_Implicit_1(*pOVar6,(MethodInfo *)0x0);
            (this->fields).isDown = bVar7;
            pTVar1 = (this->fields).objPrefab;
            if (pTVar1 != (TriggerCubePrefab *)0x0) {
              lodGameObject =
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar1,(MethodInfo *)0x0);
              MVLogicObject::MVLogicObject_SetupCulling
                        ((MVLogicObject *)this,lodGameObject,2.0,(MethodInfo *)0x0);
              TriggerCube_SetScale(this,(MethodInfo *)0x0);
              pTVar1 = (this->fields).objPrefab;
              if (pTVar1 != (TriggerCubePrefab *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar1,(MethodInfo *)0x0);
                pTVar1 = (this->fields).objPrefab;
                if ((pTVar1 != (TriggerCubePrefab *)0x0) &&
                   (pTVar3 = (pTVar1->fields).triggerBoxEvents, pTVar3 != (TriggerBoxEvents *)0x0))
                {
                  triggerCollider =
                       TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
                  this_02 = (Predicate_1_UInt32_ *)
                            func_?(TypeInfo__System__Func<int,_bool>);
                  mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                            (this_02,(Object *)this,MethodInfo__TriggerCube__DoEnter_int_,
                             (MethodInfo *)0x0);
                  this_03 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
                  UseInteractor::UseInteractor__ctor
                            (this_03,(MVWorldObjectClient *)0x0,(GameObject *)this_02,0,
                             triggerCollider,(Func_2_Int32_Boolean_ *)this_02,
                             (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,2.5,0,(MethodInfo *)0x0
                            );
                  pURam00000114 = this_03;
                  func_?();
                  unaff_ESI = (TriggerBoxEvents *)0x0;
                  if (iRam_? != 0) {
                    unaff_ESI = *(TriggerBoxEvents **)(iRam_? + 0x1c);
                    this_04 = (TeamRequirement *)func_?(TypeInfo__TeamRequirement);
                    TeamRequirement::TeamRequirement__ctor
                              (this_04,(TintObject *)unaff_ESI,0,(MethodInfo *)0x0);
                    if (pURam00000114 != (UseInteractor *)0x0) {
                      UseInteractor::UseInteractor_AddRequirement
                                (pURam00000114,(UseRequirement *)this_04,(MethodInfo *)0x0);
                      if (pURam00000114 != (UseInteractor *)0x0) {
                        UseInteractor::UseInteractor_UpdateData
                                  (pURam00000114,pDRam00000058,(MethodInfo *)0x0);
                        return;
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
  }
  func_?();
  pOVar5 = extraout_ECX;
code_?:
  func_?(unaff_ESI,pOVar5);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_InitializeInventory
               (TriggerCube *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pTVar1 = (this->fields).objPrefab;
  if ((pTVar1 != (TriggerCubePrefab *)0x0) &&
     (this_00 = (pTVar1->fields).triggerBoxEvents, this_00 != (TriggerBoxEvents *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_OnDataUpdate
               (TriggerCube *this,MethodInfo *method)

{
  TriggerCube_SetScale(this,(MethodInfo *)0x0);
  this_00 = (this->fields).useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._.data,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnIsFiringChanged(Boolean) */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_OnIsFiringChanged
               (TriggerCube *this,bool isFiring,MethodInfo *method)

{
  (this->fields).isDown = isFiring;
  return;
}


/* Void SetScale() */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_SetScale(TriggerCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingSubscriberBase);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    func_?(&StringLiteral_scaleX);
    func_?(&StringLiteral_scaleY);
    func_?(&StringLiteral_scaleZ);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if (pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
    func_?();
  }
  else {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar1,(Object *)StringLiteral_scaleX,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar3 = CONCAT44(TypeInfo__System__Single,TVar2.m_Index);
    if (TVar2.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar4 = (float *)func_?();
    fVar5 = *pfVar4;
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if (pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar1,(Object *)StringLiteral_scaleY,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar3 = CONCAT44(TypeInfo__System__Single,TVar2.m_Index);
    if (TVar2.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    puVar6 = (undefined4 *)func_?(TVar2.m_Index);
    uVar7 = *puVar6;
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if (pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar1,(Object *)StringLiteral_scaleZ,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar3 = CONCAT44(TypeInfo__System__Single,TVar2.m_Index);
    if (TVar2.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar4 = (float *)func_?(TVar2.m_Index);
    fVar8 = *pfVar4;
    pTVar9 = (this->fields).objPrefab;
    if (((pTVar9 == (TriggerCubePrefab *)0x0) ||
        (this_00 = (pTVar9->fields).triggerBoxEvents, this_00 == (TriggerBoxEvents *)0x0)) ||
       (fVar10 = fVar5, uVar11 = uVar7, fVar12 = fVar8,
       pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_00,(MethodInfo *)0x0), pTVar13 == (Transform *)0x0))
    goto code_?;
    VVar14.y = (float)uVar11;
    VVar14.x = fVar10;
    VVar14.z = fVar12;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar13,VVar14,(MethodInfo *)0x0);
    this_01 = (this->fields)._._.outputConnectorObject;
    (this->fields).outputConnectorOffset.x = fVar5 * _UNK_? + _UNK_?;
    if ((this_01 == (GameObject *)0x0) ||
       (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this_01,(MethodInfo *)0x0), pTVar13 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar13,(this->fields).outputConnectorOffset,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
         (IEditModeUI *)0x0) ||
       (cVar15 = (*(code *)(this->klass->vtable).get_HasVisualsInPlaymode.method)(), cVar15 == '\0'))
    {
      return;
    }
    iVar16 = func_?();
    if (iVar16 == 0) goto code_?;
    if ((((*(int *)(iVar16 + 0xc) != 0) &&
         (*(float *)(iVar16 + 0x10) = fVar5, 1 < *(uint *)(iVar16 + 0xc))) &&
        (*(undefined4 *)(iVar16 + 0x14) = uVar7, 2 < *(uint *)(iVar16 + 0xc))) &&
       (*(float *)(iVar16 + 0x18) = fVar8, 3 < *(uint *)(iVar16 + 0xc))) {
      *(undefined4 *)(iVar16 + 0x1c) = 0x40000000;
      uVar17 = *(uint *)(iVar16 + 0xc);
      if (uVar17 == 0) {
        fStack_18 = 0.0;
      }
      else {
        fVar5 = *(float *)(iVar16 + 0x10);
        uVar19 = 1;
        fStack_18 = fVar5;
        if (1 < (int)uVar17) {
          pfVar4 = (float *)(iVar16 + 0x14);
          do {
            if (uVar17 <= uVar19) goto code_?;
            fVar8 = *pfVar4;
            if (fVar5 < fVar8) {
              fVar5 = fVar8;
              fStack_18 = fVar8;
            }
            uVar19 = uVar19 + 1;
            pfVar4 = pfVar4 + 1;
          } while ((int)uVar19 < (int)uVar17);
        }
      }
      pCVar20 = (this->fields)._.cullingSubscriberBase;
      if (pCVar20 != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar20,(MethodInfo *)0x0);
        pVVar21 = (Vector3 *)
                  (*(code *)(this->klass->vtable).get_WorldPosition_1.method)
                            (&stack0xffffffe0,this,(this->klass->vtable).set_WorldPosition.methodPtr
                            );
        VVar14 = *pVVar21;
        this_02 = (UnityAction_1_UnityEngine_Vector2_ *)
                  func_?(
                                 TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                 );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
        UnityAction_1_UnityEngine_Vector2___ctor
                  (this_02,(Object *)this,(this->klass->vtable).UpdateControllerUpdate_1.methodPtr,
                   (MethodInfo *)0x0);
        pCVar20 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
        CullingSubscriberBase::CullingSubscriberBase__ctor_2
                  (pCVar20,fStack_18,VVar14,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_02,
                   (MethodInfo *)0x0);
        (this->fields)._.cullingSubscriberBase = pCVar20;
        func_?();
        return;
      }
      goto code_?;
    }
  }
code_?:
  uVar3 = func_?();
code_?:
  func_?(uVar3);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* TriggerCube(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::TriggerCube::TriggerCube__ctor
               (TriggerCube *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TriggerCubePrefab);
    cRam_? = '\x01';
  }
  uVar1 = (ulonglong)_UNK_?;
  (this->fields).outputConnectorOffset.x = (float)(int)uVar1;
  (this->fields).outputConnectorOffset.y = (float)(int)(uVar1 >> 0x20);
  (this->fields).outputConnectorOffset.z = 0.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 == (PrefabPool *)0x0) {
    func_?();
    pTVar3 = extraout_EDX;
  }
  else {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar2->fields).triggerCubePrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar4 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar4 = (uint)*piVar4 | 0x10000;
    piVar4 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar4 = (uint)*piVar4 | 0x8000;
    piVar4 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar4 = (uint)*piVar4 | 0x2000000;
    pTVar3 = (TriggerCubePrefab *)(this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    if (pTVar3 == (TriggerCubePrefab *)0x0) {
      (this->fields).objPrefab = (TriggerCubePrefab *)0x0;
code_?:
      func_?(&(this->fields).objPrefab,pTVar3);
      return;
    }
    unaff_EDI = TypeInfo__TriggerCubePrefab;
    if (((TypeInfo__TriggerCubePrefab->_1).naturalAligment <=
         (((ObjectPrefab__Class *)pTVar3->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pTVar3->klass)->_1).typeHierarchy
        [(TypeInfo__TriggerCubePrefab->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__TriggerCubePrefab)) {
      (this->fields).objPrefab = pTVar3;
      unaff_EDI = TypeInfo__TriggerCubePrefab;
      if (((TypeInfo__TriggerCubePrefab->_1).naturalAligment <=
           (((ObjectPrefab__Class *)pTVar3->klass)->_1).naturalAligment) &&
         ((((ObjectPrefab__Class *)pTVar3->klass)->_1).typeHierarchy
          [(TypeInfo__TriggerCubePrefab->_1).naturalAligment - 1] ==
          (Il2CppClass *)TypeInfo__TriggerCubePrefab)) goto code_?;
    }
  }
  func_?(pTVar3,unaff_EDI);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::TriggerCube::TriggerCube_get_DocumentationType
          (TriggerCube *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_TriggerCube;
}


/* Vector3 get_OutputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::TriggerCube::TriggerCube_get_OutputConnectorOffset
                    (Vector3 *__return_storage_ptr__,TriggerCube *this,MethodInfo *method)

{
  fVar1 = (this->fields).outputConnectorOffset.y;
  fVar2 = (this->fields).outputConnectorOffset.z;
  __return_storage_ptr__->x = (this->fields).outputConnectorOffset.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_triggerBoxEvents_TriggerEnter
               (TriggerCube *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Trigger_cube_entered_by_object_w);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    UVar1 = UseInteractor::UseInteractor_EvaluateRequirementsUsability(this_00,(MethodInfo *)0x0);
    if ((UVar1 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) != 0) {
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((e != (TriggerEventArgs *)0x0) && (this_01 != (MVWorldObjectClientManager *)0x0)) {
      triggerInstigatorId =
           MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                     (this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0);
      if (triggerInstigatorId == -1) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Trigger_cube_entered_by_object_w,(MethodInfo *)0x0);
        return;
      }
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                  (this_02,(this->fields)._._._.id,triggerInstigatorId,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void triggerBoxEvents_TriggerExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_triggerBoxEvents_TriggerExit
               (TriggerCube *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Pressure_plated_exited_by_object);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_00 != (MVWorldObjectClientManager *)0x0)) {
    triggerInstigatorId =
         MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                   (this_00,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (triggerInstigatorId == -1) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Pressure_plated_exited_by_object,(MethodInfo *)0x0);
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxExit
                (this_01,iRam_?,triggerInstigatorId,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

