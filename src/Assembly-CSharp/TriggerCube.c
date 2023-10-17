
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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
    pTVar2 = (pTVar1->fields).triggerBoxEvents;
    unaff_EDI = (UnityAction_2_System_Object_System_Object_ *)
                func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    if (unaff_EDI != (UnityAction_2_System_Object_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (unaff_EDI,(Object *)this,
                 MethodInfo__TriggerCube__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (pTVar2 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (pTVar2,(EventHandler_1_TriggerEventArgs_ *)unaff_EDI,(MethodInfo *)0x0);
        pTVar1 = (this->fields).objPrefab;
        if (pTVar1 != (TriggerCubePrefab *)0x0) {
          pTVar2 = (pTVar1->fields).triggerBoxEvents;
          unaff_EDI = (UnityAction_2_System_Object_System_Object_ *)
                      func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
          if (unaff_EDI != (UnityAction_2_System_Object_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (unaff_EDI,(Object *)this,
                       MethodInfo__TriggerCube__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar2 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                        (pTVar2,(EventHandler_1_TriggerEventArgs_ *)unaff_EDI,(MethodInfo *)0x0);
              this_00 = (Action_3_Boolean_Boolean_Object_ *)
                        func_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
              unaff_EDI = (UnityAction_2_System_Object_System_Object_ *)0x0;
              if (this_00 != (Action_3_Boolean_Boolean_Object_ *)0x0) {
                mscorlib.dll::System::Action`3[Boolean,Boolean,Object]::
                Action_3_Boolean_Boolean_Object___ctor
                          (this_00,(Object *)this,
                           MethodInfo__TriggerCube__Callback_bool__bool__LogicObjectManager_,
                           (MethodInfo *)0x0);
                pIVar3 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                                   ((MVWorldObject *)this,1,
                                    (Action_3_Boolean_Boolean_LogicObjectManager_ *)this_00,
                                    (MethodInfo *)0x0);
                (this->fields)._InputSignalReceiver_k__BackingField = pIVar3;
                func_?(&(this->fields)._InputSignalReceiver_k__BackingField,pIVar3);
                woId = (this->fields)._._._.id;
                this_01 = (WorldObjectClientRef_1_System_Object_ *)
                          func_?(TypeInfo__OutputSignalTransmitter);
                unaff_EDI = (UnityAction_2_System_Object_System_Object_ *)0x0;
                if (this_01 != (WorldObjectClientRef_1_System_Object_ *)0x0) {
                  WorldObjectClientRef`1[System::Object]::
                  WorldObjectClientRef_1_System_Object___ctor(this_01,woId,(MethodInfo *)0x0);
                  (this->fields).outputSignalTransmitter = (OutputSignalTransmitter *)this_01;
                  func_?(&(this->fields).outputSignalTransmitter,this_01);
                  hashtable = (Dictionary_2_System_Object_System_Object_ *)
                              (*(this->klass->vtable).get_RunTimeData.methodPtr)
                                        (this,(this->klass->vtable).get_RunTimeData.method);
                  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__Extensions);
                  }
                  unaff_EDI = (UnityAction_2_System_Object_System_Object_ *)
                              Extensions::Extensions_GetObscuredType
                                        (hashtable,StringLiteral_triggerBoxState,(MethodInfo *)0x0);
                  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
                  }
                  if (unaff_EDI != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                    pOVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
                    if ((unaff_EDI->klass->_0).element_class !=
                        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).
                        element_class) goto code_?;
                    pOVar5 = (ObscuredBool *)func_?(unaff_EDI);
                    bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                            ObscuredBool::ObscuredBool_op_Implicit_1(*pOVar5,(MethodInfo *)0x0);
                    (this->fields).isDown = bVar6;
                    pTVar1 = (this->fields).objPrefab;
                    if (pTVar1 != (TriggerCubePrefab *)0x0) {
                      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_gameObject((Component *)pTVar1,(MethodInfo *)0x0);
                      MVLogicObject::MVLogicObject_SetupCulling
                                ((MVLogicObject *)this,pGVar7,2.0,(MethodInfo *)0x0);
                      TriggerCube_SetScale(this,(MethodInfo *)0x0);
                      pTVar1 = (this->fields).objPrefab;
                      if (pTVar1 != (TriggerCubePrefab *)0x0) {
                        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_gameObject((Component *)pTVar1,(MethodInfo *)0x0);
                        pTVar1 = (this->fields).objPrefab;
                        if ((pTVar1 != (TriggerCubePrefab *)0x0) &&
                           (pTVar2 = (pTVar1->fields).triggerBoxEvents,
                           pTVar2 != (TriggerBoxEvents *)0x0)) {
                          triggerCollider =
                               TriggerBoxEvents::TriggerBoxEvents_get_Collider
                                         (pTVar2,(MethodInfo *)0x0);
                          this_02 = (Predicate_1_Int32Enum_ *)
                                    func_?(TypeInfo__System__Func<int,_bool>);
                          if (this_02 != (Predicate_1_Int32Enum_ *)0x0) {
                            mscorlib.dll::System::Predicate`1[Int32Enum]::
                            Predicate_1_Int32Enum___ctor
                                      (this_02,(Object *)this,MethodInfo__TriggerCube__DoEnter_int_,
                                       (MethodInfo *)0x0);
                            unaff_EDI = (UnityAction_2_System_Object_System_Object_ *)
                                        func_?(TypeInfo__UseInteractor);
                            if (unaff_EDI != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                              UseInteractor::UseInteractor__ctor
                                        ((UseInteractor *)unaff_EDI,(MVWorldObjectClient *)this,
                                         pGVar7,0,triggerCollider,(Func_2_Int32_Boolean_ *)this_02,
                                         (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,2.5,0,
                                         (MethodInfo *)0x0);
                              (this->fields).useInteractor = (UseInteractor *)unaff_EDI;
                              func_?(&(this->fields).useInteractor,unaff_EDI);
                              pTVar1 = (this->fields).objPrefab;
                              if (pTVar1 != (TriggerCubePrefab *)0x0) {
                                tintObject = (pTVar1->fields).tintObject;
                                unaff_EDI = (UnityAction_2_System_Object_System_Object_ *)
                                            func_?(TypeInfo__TeamRequirement);
                                if (unaff_EDI != (UnityAction_2_System_Object_System_Object_ *)0x0)
                                {
                                  TeamRequirement::TeamRequirement__ctor
                                            ((TeamRequirement *)unaff_EDI,(TintObject *)tintObject,0
                                             ,(MethodInfo *)0x0);
                                  pUVar8 = (this->fields).useInteractor;
                                  if (pUVar8 != (UseInteractor *)0x0) {
                                    UseInteractor::UseInteractor_AddRequirement
                                              (pUVar8,(UseRequirement *)unaff_EDI,(MethodInfo *)0x0)
                                    ;
                                    pUVar8 = (this->fields).useInteractor;
                                    if (pUVar8 != (UseInteractor *)0x0) {
                                      UseInteractor::UseInteractor_UpdateData
                                                (pUVar8,(this->fields)._._._.data,(MethodInfo *)0x0)
                                      ;
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
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pOVar4 = extraout_ECX;
code_?:
  func_?(unaff_EDI,pOVar4);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  object = this;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&StringLiteral_scaleX);
    func_?(&StringLiteral_scaleY);
    func_?(&StringLiteral_scaleZ);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._._.data;
  if ((pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar1,(Object *)StringLiteral_scaleX,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar2 == (Object *)0x0)) goto code_?;
  if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
  goto code_?;
  pfVar3 = (float *)func_?();
  fVar4 = *pfVar3;
  pDVar1 = (this->fields)._._._.data;
  if ((pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar1,(Object *)StringLiteral_scaleY,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar2 == (Object *)0x0)) goto code_?;
  if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
  goto code_?;
  puVar5 = (undefined4 *)func_?();
  uVar6 = *puVar5;
  pDVar1 = (this->fields)._._._.data;
  if ((pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar1,(Object *)StringLiteral_scaleZ,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar2 == (Object *)0x0)) goto code_?;
  if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
  goto code_?;
  pfVar3 = (float *)func_?();
  fVar7 = *pfVar3;
  pTVar8 = (this->fields).objPrefab;
  if (((pTVar8 == (TriggerCubePrefab *)0x0) ||
      (this_00 = (pTVar8->fields).triggerBoxEvents, this_00 == (TriggerBoxEvents *)0x0)) ||
     (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0)) {
code_?:
    func_?();
  }
  else {
    VVar10.y = (float)uVar6;
    VVar10.x = fVar4;
    VVar10.z = fVar7;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar9,VVar10,(MethodInfo *)0x0);
    this_01 = (this->fields)._._.outputConnectorObject;
    (this->fields).outputConnectorOffset.x = fVar4 * _UNK_? + _UNK_?;
    if ((this_01 == (GameObject *)0x0) ||
       (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this_01,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar9,(this->fields).outputConnectorOffset,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
         (IEditModeUI *)0x0) ||
       (cVar11 = (*(this->klass->vtable).get_HasVisualsInPlaymode.methodPtr)(), cVar11 == '\0')) {
      return;
    }
    iVar12 = func_?();
    if (iVar12 == 0) goto code_?;
    if ((((*(int *)(iVar12 + 0xc) != 0) &&
         (*(float *)(iVar12 + 0x10) = fVar4, 1 < *(uint *)(iVar12 + 0xc))) &&
        (*(undefined4 *)(iVar12 + 0x14) = uVar6, 2 < *(uint *)(iVar12 + 0xc))) &&
       (*(float *)(iVar12 + 0x18) = fVar7, 3 < *(uint *)(iVar12 + 0xc))) {
      *(undefined4 *)(iVar12 + 0x1c) = 0x40000000;
      uVar13 = *(uint *)(iVar12 + 0xc);
      if (uVar13 == 0) {
        this = (TriggerCube *)0x0;
      }
      else {
        pTVar14 = *(TriggerCube **)(iVar12 + 0x10);
        uVar15 = 1;
        this = pTVar14;
        if (1 < (int)uVar13) {
          pfVar3 = (float *)(iVar12 + 0x14);
          do {
            if (uVar13 <= uVar15) goto code_?;
            pTVar16 = (TriggerCube *)*pfVar3;
            if ((float)pTVar14 < (float)pTVar16) {
              pTVar14 = pTVar16;
              this = pTVar16;
            }
            uVar15 = uVar15 + 1;
            pfVar3 = pfVar3 + 1;
          } while ((int)uVar15 < (int)uVar13);
        }
      }
      pCVar17 = (object->fields)._.cullingSubscriberBase;
      if (pCVar17 != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar17,(MethodInfo *)0x0);
        pVVar18 = (Vector3 *)(*(object->klass->vtable).get_WorldPosition_1.methodPtr)();
        VVar10 = *pVVar18;
        this_02 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
        if (this_02 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
          UnityAction_1_UnityEngine_Vector2___ctor
                    (this_02,(Object *)object,(object->klass->vtable).OnStateChanged.method,
                     (MethodInfo *)0x0);
          pCVar17 = (CullingSubscriberBase *)func_?();
          if (pCVar17 != (CullingSubscriberBase *)0x0) {
            CullingSubscriberBase::CullingSubscriberBase__ctor_2
                      (pCVar17,(float)this,VVar10,
                       (UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_02,(MethodInfo *)0x0);
            (object->fields)._.cullingSubscriberBase = pCVar17;
            func_?();
            return;
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
    if (((TypeInfo__TriggerCubePrefab->_1).typeHierarchyDepth <=
         (((ObjectPrefab__Class *)pTVar3->klass)->_1).typeHierarchyDepth) &&
       ((((ObjectPrefab__Class *)pTVar3->klass)->_1).typeHierarchy
        [(TypeInfo__TriggerCubePrefab->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__TriggerCubePrefab)) {
      (this->fields).objPrefab = pTVar3;
      unaff_EDI = TypeInfo__TriggerCubePrefab;
      if (((TypeInfo__TriggerCubePrefab->_1).typeHierarchyDepth <=
           (((ObjectPrefab__Class *)pTVar3->klass)->_1).typeHierarchyDepth) &&
         ((((ObjectPrefab__Class *)pTVar3->klass)->_1).typeHierarchy
          [(TypeInfo__TriggerCubePrefab->_1).typeHierarchyDepth - 1] ==
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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

