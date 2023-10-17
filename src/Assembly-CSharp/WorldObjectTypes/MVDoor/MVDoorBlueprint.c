
/* Void DeSelect() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint_DeSelect
               (MVDoorBlueprint *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pMStack_2 = (this->fields).editableCubeModel;
  if (pMStack_2 != (MVCubeModelInstance *)0x0) {
    pMStack_1 = (pMStack_2->klass->vtable).DeSelect.method;
    (*(pMStack_2->klass->vtable).DeSelect.methodPtr)();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint_Initialize
               (MVDoorBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    func_?(&TypeInfo__EditableCubeModelWrapper);
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor);
    func_?(&StringLiteral_DoorLogic);
    func_?(&StringLiteral_DoorCubeModel);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pMVar1 = (MVDoor *)
            MVBlueprintBase::MVBlueprintBase_GetChild
                      ((MVBlueprintBase *)this,StringLiteral_DoorLogic,(MethodInfo *)0x0);
  if (pMVar1 == (MVDoor *)0x0) {
    (this->fields).doorLogic = (MVDoor *)0x0;
code_?:
    func_?(&(this->fields).doorLogic,pMVar1);
    pMVar1 = (this->fields).doorLogic;
    if (pMVar1 == (MVDoor *)0x0) goto code_?;
    (pMVar1->fields)._DoorBlueprint_k__BackingField = this;
    func_?(&(pMVar1->fields)._DoorBlueprint_k__BackingField,this);
    pMVar1 = (this->fields).doorLogic;
    if (pMVar1 == (MVDoor *)0x0) goto code_?;
    uVar2._0_4_ = (pMVar1->fields).doorConfig.toggleTime;
    uVar2._4_4_ = (pMVar1->fields).doorConfig.docType;
    doorType = (pMVar1->fields).doorConfig.doorType;
    pMVar3 = (this->fields).doorLogic;
    if ((pMVar3 == (MVDoor *)0x0) ||
       (pMVar4 = (pMVar3->fields).doorObject, pMVar4 == (MVDoorObject *)0x0)) goto code_?;
    pTVar5 = (pMVar4->fields).animationRoot;
    pTVar6 = (((this->fields).doorLogic)->fields)._._.transform;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3,(pMVar1->fields).doorConfig.openValue,
                      (pMVar1->fields).doorConfig.closeValue,uVar2);
      cRam_? = '\x01';
    }
    if (pTVar6 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar6,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0);
    cubeModelBase =
         (MVDoor__Class *)
         MVBlueprintBase::MVBlueprintBase_GetChild
                   ((MVBlueprintBase *)this,StringLiteral_DoorCubeModel,(MethodInfo *)0x0);
    if (cubeModelBase == (MVDoor__Class *)0x0) goto code_?;
    pIVar7 = (cubeModelBase->_0).image;
    pMVar8 = TypeInfo__MVCubeModelInstance;
    if (((TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth <= *(byte *)&pIVar7[4].nameNoExt) &&
       (*(MVCubeModelInstance__Class **)
         ((pIVar7[2].typeCount - 4) +
         (uint)(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth * 4) ==
        TypeInfo__MVCubeModelInstance)) {
      (*(code *)(cubeModelBase->_0).image[0x12].token)();
      if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar9 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_GetEditPoints
                          ((ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector_ *)
                           &stack0xffffffdc,doorType,(MethodInfo *)0x0);
      uVar10._0_2_ = (pVVar9->Item1).x;
      uVar10._2_2_ = (pVVar9->Item1).y;
      uVar10._4_2_ = (pVVar9->Item1).z;
      uVar11 = (pVVar9->Item2).x;
      uVar12 = (pVVar9->Item2).y;
      uVar13 = (pVVar9->Item2).z;
      pEVar14 = (EditableCubeModelWrapper *)func_?();
      if (pEVar14 != (EditableCubeModelWrapper *)0x0) {
        max.y = uVar12;
        max.x = uVar11;
        max.z = uVar13;
        EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
                  (pEVar14,(MVCubeModelInstance *)cubeModelBase,(IntVector)uVar10,max,0x14,
                   (MethodInfo *)0x0);
        (this->fields).editableCubeModelWrapper = pEVar14;
        func_?(&(this->fields).editableCubeModelWrapper,pEVar14);
        pEVar14 = (this->fields).editableCubeModelWrapper;
        if (pEVar14 != (EditableCubeModelWrapper *)0x0) {
          pMVar15 = (pEVar14->fields).cubeModelBase;
          (this->fields).editableCubeModel = pMVar15;
          func_?(&(this->fields).editableCubeModel,pMVar15);
          pMVar1 = (this->fields).doorLogic;
          pMVar15 = (this->fields).editableCubeModel;
          if (pMVar1 != (MVDoor *)0x0) {
            (pMVar1->fields).doorModelInstance = pMVar15;
            func_?(&(pMVar1->fields).doorModelInstance,pMVar15);
            pMVar15 = (this->fields).editableCubeModel;
            if ((pMVar15 != (MVCubeModelInstance *)0x0) &&
               (pTVar6 = (pMVar15->fields)._._.transform, pTVar6 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                        (pTVar6,pTVar5,(MethodInfo *)0x0);
              pMVar15 = (this->fields).editableCubeModel;
              if (pMVar15 != (MVCubeModelInstance *)0x0) {
                pTVar6 = (pMVar15->fields)._._.transform;
                pVVar16 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::
                          DoorData_GetCubeModelLocalPosition
                                    ((Vector3 *)&stack0xffffffdc,doorType,pTVar5,(MethodInfo *)0x0);
                if (pTVar6 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                            (pTVar6,*pVVar16,(MethodInfo *)0x0);
                  pMVar15 = (this->fields).editableCubeModel;
                  if (pMVar15 != (MVCubeModelInstance *)0x0) {
                    MVCubeModelInstance::MVCubeModelInstance_EnableCulling
                              (pMVar15,(MethodInfo *)0x0);
                    pMVar1 = (this->fields).doorLogic;
                    if (pMVar1 != (MVDoor *)0x0) {
                      uVar17 = *(undefined4 *)((int)&(pMVar1->fields)._._.interactionFlags + 4);
                      piVar18 = &(pMVar1->fields)._._.interactionFlags;
                      *(uint *)piVar18 = (uint)*piVar18 | 0x30;
                      *(undefined4 *)((int)&(pMVar1->fields)._._.interactionFlags + 4) = uVar17;
                      pMVar15 = (this->fields).editableCubeModel;
                      if (pMVar15 != (MVCubeModelInstance *)0x0) {
                        piVar18 = &(pMVar15->fields)._._.interactionFlags;
                        *(uint *)piVar18 = (uint)*piVar18 | 0x30;
                        *(undefined4 *)((int)&(pMVar15->fields)._._.interactionFlags + 4) =
                             *(undefined4 *)((int)&(pMVar15->fields)._._.interactionFlags + 4);
                        pMVar1 = (this->fields).doorLogic;
                        if (pMVar1 != (MVDoor *)0x0) {
                          pDVar19 = (this->fields)._._._._.data;
                          (pMVar1->fields).useInteractorData = pDVar19;
                          func_?(&(pMVar1->fields).useInteractorData,pDVar19);
                          pMVar1 = (this->fields).doorLogic;
                          if (pMVar1 != (MVDoor *)0x0) {
                            MVDoor::MVDoor_UpdateUseInteractor(pMVar1,(MethodInfo *)0x0);
                            pMVar1 = (this->fields).doorLogic;
                            if ((((pMVar1 != (MVDoor *)0x0) &&
                                 (pMVar4 = (pMVar1->fields).doorObject,
                                 pMVar4 != (MVDoorObject *)0x0)) &&
                                (pMVar15 = (this->fields).editableCubeModel,
                                pMVar15 != (MVCubeModelInstance *)0x0)) &&
                               (pTVar5 = (pMVar4->fields).cube, pTVar5 != (Transform *)0x0)) {
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_SetParent_1
                                        (pTVar5,(pMVar15->fields)._._.transform,0,(MethodInfo *)0x0)
                              ;
                              MVDoorBlueprint_SetCubeSize(this,(MethodInfo *)0x0);
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
      goto code_?;
    }
  }
  else {
    if (((TypeInfo__WorldObjectTypes__MVDoor__MVDoor->_1).typeHierarchyDepth <=
         (pMVar1->klass->_1).typeHierarchyDepth) &&
       ((MVDoor__Class *)
        (pMVar1->klass->_1).typeHierarchy
        [(TypeInfo__WorldObjectTypes__MVDoor__MVDoor->_1).typeHierarchyDepth - 1] ==
        TypeInfo__WorldObjectTypes__MVDoor__MVDoor)) {
      (this->fields).doorLogic = pMVar1;
      if (((TypeInfo__WorldObjectTypes__MVDoor__MVDoor->_1).typeHierarchyDepth <=
           (pMVar1->klass->_1).typeHierarchyDepth) &&
         ((MVDoor__Class *)
          (pMVar1->klass->_1).typeHierarchy
          [(TypeInfo__WorldObjectTypes__MVDoor__MVDoor->_1).typeHierarchyDepth - 1] ==
          TypeInfo__WorldObjectTypes__MVDoor__MVDoor)) goto code_?;
    }
    cubeModelBase = TypeInfo__WorldObjectTypes__MVDoor__MVDoor;
    func_?(pMVar1,TypeInfo__WorldObjectTypes__MVDoor__MVDoor);
    pMVar8 = extraout_EDX;
  }
  func_?(cubeModelBase,pMVar8);
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::
     MVDoorBlueprint_InitializeInventory(MVDoorBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor);
    func_?(&StringLiteral_DoorLogic);
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  pMVar1 = (MVDoor *)
           MVBlueprintBase::MVBlueprintBase_GetChild
                     ((MVBlueprintBase *)this,StringLiteral_DoorLogic,(MethodInfo *)0x0);
  if (pMVar1 == (MVDoor *)0x0) {
    (this->fields).doorLogic = (MVDoor *)0x0;
    func_?();
    return;
  }
  if (((TypeInfo__WorldObjectTypes__MVDoor__MVDoor->_1).typeHierarchyDepth <=
       (pMVar1->klass->_1).typeHierarchyDepth) &&
     ((MVDoor__Class *)
      (pMVar1->klass->_1).typeHierarchy
      [(TypeInfo__WorldObjectTypes__MVDoor__MVDoor->_1).typeHierarchyDepth - 1] ==
      TypeInfo__WorldObjectTypes__MVDoor__MVDoor)) {
    (this->fields).doorLogic = pMVar1;
    if (((TypeInfo__WorldObjectTypes__MVDoor__MVDoor->_1).typeHierarchyDepth <=
         (pMVar1->klass->_1).typeHierarchyDepth) &&
       ((MVDoor__Class *)
        (pMVar1->klass->_1).typeHierarchy
        [(TypeInfo__WorldObjectTypes__MVDoor__MVDoor->_1).typeHierarchyDepth - 1] ==
        TypeInfo__WorldObjectTypes__MVDoor__MVDoor)) {
      func_?();
      return;
    }
  }
  func_?(pMVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint_OnDataUpdate
               (MVDoorBlueprint *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_OnDataUpdate((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).doorLogic;
  if (pMVar1 == (MVDoor *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pDVar3 = (this->fields)._._._._.data;
  (pMVar1->fields).useInteractorData = pDVar3;
  func_?(&(pMVar1->fields).useInteractorData,pDVar3);
  if ((this->fields).doorLogic == (MVDoor *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__System__Func<int,_bool>);
    func_?(&TypeInfo__GameCoinLogic);
    func_?(&TypeInfo__GameRankRequirement);
    func_?(&TypeInfo__LevelBasedUseRequirement);
    func_?(&MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CheckIfOpen__);
    func_?(&MethodInfo__WorldObjectTypes__MVDoor__MVDoor__Use_int_);
    func_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement);
    func_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedCheckNoCost);
    func_?(&TypeInfo__StarRequirement);
    func_?(&TypeInfo__UseInteractor);
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  if (((bRam_? & pURam00000108 == (UseInteractor *)0x0) == 0) ||
     (pMRam00000100 == (MVWorldObjectClient *)0x0)) {
    if (bRam_? == 0) {
code_?:
      if (pURam00000108 != (UseInteractor *)0x0) {
        MVDoor::MVDoor_DestroyUseInteractor((MVDoor *)0x0,(MethodInfo *)0x0);
      }
      return;
    }
    if (pURam00000108 == (UseInteractor *)0x0) {
      if (bRam_? != 0) {
        return;
      }
      goto code_?;
    }
  }
  else {
    if (iRam_? == 0) goto code_?;
    pGVar4 = *(GameObject **)(iRam_? + 0x18);
    triggerCollider = *(Collider **)(iRam_? + 0x20);
    wo = pMRam00000100;
    this_00 = (Predicate_1_Int32Enum_ *)func_?(TypeInfo__System__Func<int,_bool>);
    if (this_00 == (Predicate_1_Int32Enum_ *)0x0) goto code_?;
    mscorlib.dll::System::Predicate`1[Int32Enum]::Predicate_1_Int32Enum___ctor
              (this_00,(Object *)0x0,MethodInfo__WorldObjectTypes__MVDoor__MVDoor__Use_int_,
               (MethodInfo *)0x0);
    pUVar5 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
    if (pUVar5 == (UseInteractor *)0x0) goto code_?;
    UseInteractor::UseInteractor__ctor
              (pUVar5,wo,pGVar4,0,triggerCollider,(Func_2_Int32_Boolean_ *)this_00,
               (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,2.5,0,(MethodInfo *)0x0);
    pURam00000108 = pUVar5;
    func_?(0x108,pUVar5);
    pUVar5 = pURam00000108;
    if (iRam_? == 0) goto code_?;
    pTVar6 = *(TriggerBoxEvents **)(iRam_? + 0x28);
    pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    if (((pUVar7 == (UnityAction_2_System_Object_System_Object_ *)0x0) ||
        (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
         Object]::UnityAction_2_System_Object_System_Object___ctor
                   (pUVar7,(Object *)pUVar5,
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                    ,(MethodInfo *)0x0), pTVar6 == (TriggerBoxEvents *)0x0)) ||
       (TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (pTVar6,(EventHandler_1_TriggerEventArgs_ *)pUVar7,(MethodInfo *)0x0),
       pUVar5 = pURam00000108, iRam_? == 0)) goto code_?;
    pTVar6 = *(TriggerBoxEvents **)(iRam_? + 0x28);
    pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    if (((pUVar7 == (UnityAction_2_System_Object_System_Object_ *)0x0) ||
        (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
         Object]::UnityAction_2_System_Object_System_Object___ctor
                   (pUVar7,(Object *)pUVar5,
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                    ,(MethodInfo *)0x0), pTVar6 == (TriggerBoxEvents *)0x0)) ||
       (TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                  (pTVar6,(EventHandler_1_TriggerEventArgs_ *)pUVar7,(MethodInfo *)0x0),
       iRam_? == 0)) goto code_?;
    pGVar4 = *(GameObject **)(iRam_? + 0x18);
    this_01 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
    if (((this_01 == (GameCoinLogic *)0x0) ||
        (GameCoinLogic::GameCoinLogic__ctor(this_01,pGVar4,1,(MethodInfo *)0x0),
        pURam00000108 == (UseInteractor *)0x0)) ||
       (UseInteractor::UseInteractor_AddRequirement
                  (pURam00000108,(UseRequirement *)this_01,(MethodInfo *)0x0), iRam_? == 0))
    goto code_?;
    pGVar4 = *(GameObject **)(iRam_? + 0x18);
    this_02 = (LevelBasedUseRequirement *)func_?(TypeInfo__LevelBasedUseRequirement);
    if (((this_02 == (LevelBasedUseRequirement *)0x0) ||
        (LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                   (this_02,pGVar4,1,(MethodInfo *)0x0), pURam00000108 == (UseInteractor *)0x0)) ||
       (UseInteractor::UseInteractor_AddRequirement
                  (pURam00000108,(UseRequirement *)this_02,(MethodInfo *)0x0), iRam_? == 0))
    goto code_?;
    pGVar4 = *(GameObject **)(iRam_? + 0x18);
    this_03 = (StarRequirement *)func_?(TypeInfo__StarRequirement);
    if (((this_03 == (StarRequirement *)0x0) ||
        (StarRequirement::StarRequirement__ctor(this_03,pGVar4,1,(MethodInfo *)0x0),
        pURam00000108 == (UseInteractor *)0x0)) ||
       (UseInteractor::UseInteractor_AddRequirement
                  (pURam00000108,(UseRequirement *)this_03,(MethodInfo *)0x0), iRam_? == 0))
    goto code_?;
    pGVar4 = *(GameObject **)(iRam_? + 0x18);
    this_04 = (GameRankRequirement *)func_?(TypeInfo__GameRankRequirement);
    if (((this_04 == (GameRankRequirement *)0x0) ||
        (GameRankRequirement::GameRankRequirement__ctor
                   (this_04,pGVar4,(MVWorldObjectClient *)0x0,1,(MethodInfo *)0x0),
        pURam00000108 == (UseInteractor *)0x0)) ||
       (UseInteractor::UseInteractor_AddRequirement
                  (pURam00000108,(UseRequirement *)this_04,(MethodInfo *)0x0), iRam_? == 0))
    goto code_?;
    pMVar8 = *(MonitorData **)(iRam_? + 0x18);
    pIVar9 = (IEnumerator *)
              func_?(TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedCheckNoCost
                             );
    pMVar10 = MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CheckIfOpen__;
    if (pIVar9 == (IEnumerator *)0x0) goto code_?;
    uVar11 = func_?(MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CheckIfOpen__);
    pIVar9[1].klass = (IEnumerator__Class *)uVar11;
    pIVar9[2].monitor = (MonitorData *)pMVar10;
    pIVar9[2].klass = (IEnumerator__Class *)0x0;
    func_?(pIVar9 + 2,0);
    uVar12 = pMVar10->parameters_count;
    pIVar9[4].klass = (IEnumerator__Class *)pIVar9;
    cVar13 = func_?(pMVar10);
    if (cVar13 == '\0') {
code_?:
      pIVar9[4].klass = pIVar9[2].klass;
      pMVar14 = (MonitorData *)pIVar9[1].klass;
    }
    else if (pMVar10->indirect_call_via_invokers == 0) {
      if (uVar12 != 0) goto code_?;
      pMVar14 = (MonitorData *)&UNK_?;
    }
    else {
      pMVar14 = (MonitorData *)&UNK_?;
      if (uVar12 != 0) {
        pMVar14 = (MonitorData *)&UNK_?;
      }
    }
    pIVar9[1].monitor = pMVar14;
    pIVar9[3].monitor = (MonitorData *)&UNK_?;
    this_05 = (TweenRunner_1_FloatTween_ *)
              func_?(
                             TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement
                             );
    if (this_05 == (TweenRunner_1_FloatTween_ *)0x0) goto code_?;
    *(undefined8 *)&(this_05->fields).m_Tween = 0;
    this_05[1].monitor = (MonitorData *)0x0;
    this_05[1].fields.m_CoroutineContainer = (MonoBehaviour *)0xffffffff;
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_05,(MethodInfo *)0x0);
    this_05[2].monitor = pMVar8;
    func_?(&this_05[2].monitor,pMVar8);
    this_05[2].fields.m_Tween = pIVar9;
    func_?(&this_05[2].fields.m_Tween,pIVar9);
    uVar15 = *(undefined8 *)&(this_05->fields).m_Tween;
    fStack_16 = (float)uVar15;
    fVar17 = (float)((ulonglong)uVar15 >> 0x20) + _UNK_?;
    *(bool *)&this_05[3].klass = this_05[2].fields.m_Tween != (IEnumerator *)0x0;
    *(ulonglong *)&(this_05->fields).m_Tween = CONCAT44(fVar17,fStack_16 + 0.0);
    this_05[1].monitor = (MonitorData *)((float)this_05[1].monitor + 0.0);
    if (pURam00000108 == (UseInteractor *)0x0) goto code_?;
    UseInteractor::UseInteractor_AddRequirement
              (pURam00000108,(UseRequirement *)this_05,(MethodInfo *)0x0);
  }
  if (pURam00000108 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(pURam00000108,pDRam00000128,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(pDVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint_OnEnterObject
               (MVDoorBlueprint *this,EditorStateMachine *e,MethodInfo *method)

{
  pMVar1 = (this->fields).doorLogic;
  if (((pMVar1 != (MVDoor *)0x0) &&
      (pMVar2 = (pMVar1->fields).doorObject, pMVar2 != (MVDoorObject *)0x0)) &&
     (this_00 = (pMVar2->fields).cube, this_00 != (Transform *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      pEVar3 = (this->fields).editableCubeModelWrapper;
      if (pEVar3 != (EditableCubeModelWrapper *)0x0) {
        bVar4 = (*(pEVar3->klass->vtable).OnEnterObject.methodPtr)();
        return bVar4;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint_OnExitObject
               (MVDoorBlueprint *this,EditorStateMachine *e,MethodInfo *method)

{
  MVDoorBlueprint_SetCubeSize(this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).doorLogic;
  if (((pMVar1 != (MVDoor *)0x0) &&
      (pMVar2 = (pMVar1->fields).doorObject, pMVar2 != (MVDoorObject *)0x0)) &&
     (this_00 = (pMVar2->fields).cube, this_00 != (Transform *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      pEVar3 = (this->fields).editableCubeModelWrapper;
      if (pEVar3 != (EditableCubeModelWrapper *)0x0) {
        pEVar4 = pEVar3->klass;
        pMStack5 = (pEVar4->vtable).OnExitObject.method;
        pEStack6 = e;
        bVar7 = (*(pEVar4->vtable).OnExitObject.methodPtr)();
        return bVar7;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* Void Select(Color) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint_Select
               (MVDoorBlueprint *this,Color color,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pMVar2 = (this->fields).editableCubeModel;
  if (pMVar2 != (MVCubeModelInstance *)0x0) {
    pMStack_1 = (pMVar2->klass->vtable).Select_1.method;
    fStack_3 = color.b;
    fStack_4 = color.a;
    (*(pMVar2->klass->vtable).Select_1.methodPtr)(pMVar2,color.r,color.g);
    return;
  }
  uVar5 = func_?(&fStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetCubeSize() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint_SetCubeSize
               (MVDoorBlueprint *this,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshFilter_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::MeshFilter>__
                   );
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  pMVar2 = (this->fields).doorLogic;
  if ((pMVar2 != (MVDoor *)0x0) &&
     (pMVar3 = (pMVar2->fields).doorObject, pMVar3 != (MVDoorObject *)0x0)) {
    this_01 = (String *)(pMVar3->fields).cube;
    pMVar4 = (this->fields).editableCubeModel;
    if (pMVar4 != (MVCubeModelInstance *)0x0) {
      pBVar5 = MVCubeModelBase::MVCubeModelBase_GetBounds
                         ((Bounds *)&stack0xffffffe4,(MVCubeModelBase *)pMVar4,(MethodInfo *)0x0);
      uVar6 = (pBVar5->m_Extents).y;
      uVar7 = (pBVar5->m_Extents).z;
      method = (MethodInfo *)uVar7;
      this = (MVDoorBlueprint *)uVar6;
      pRVar8 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                          ((Regex_CachedCodeEntryKey *)&stack0xfffffff0,
                           (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&stack0xffffffcc,(MethodInfo *)0x0);
      if (this_01 != (String *)0x0) {
        pSVar9 = (String *)pRVar8->_options;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  ((Transform *)this_01,(Vector3)*pRVar8,(MethodInfo *)0x0);
        pSVar10 = (String *)&UNK_?;
        pMVar11 = 
        UnityEngine__MeshFilter_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::MeshFilter>__
        ;
        this_00 = (MeshFilter *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                            ((Component *)this_01,
                             UnityEngine__MeshFilter_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::MeshFilter>__
                            );
        if (this_00 != (MeshFilter *)0x0) {
          pMVar12 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                              (this_00,(MethodInfo *)0x0);
          if (pMVar12 != (Mesh *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(pMVar12,(MethodInfo *)0x0);
            pMVar12 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                (this_00,(MethodInfo *)0x0);
            pMVar4 = (pMVar1->fields).editableCubeModel;
            if (pMVar4 != (MVCubeModelInstance *)0x0) {
              fVar13 = (float)pSVar10;
              fVar14 = (float)pSVar9;
              uVar15 = CONCAT44(fVar13,fVar14);
              fVar16 = (float)this_01;
              VVar17 = (Vector3)CONCAT48(fVar16,uVar15);
              fVar18 = (float)pMVar11;
              bounds = (Bounds)CONCAT1212(VVar19,VVar17);
              corners = MVCubeModelInstance::MVCubeModelInstance_GetCorners
                                  (pMVar4,bounds,(MethodInfo *)0x0);
              if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              SharedCubeFunctions::SharedCubeFunctions_AddCubeMesh
                        (pMVar12,corners,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* MVDoorBlueprint(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint__ctor
               (MVDoorBlueprint *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase__ctor
            ((MVBlueprintBase *)this,data,worldObjects,(MethodInfo *)0x0);
  iVar1 = (this->fields)._._._.interactionFlags;
  *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) =
       *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
  puVar2 = (uint *)((int)&(this->fields)._._._.interactionFlags + 4);
  *puVar2 = *puVar2 | 2;
  *(uint *)&(this->fields)._._._.interactionFlags = (uint)iVar1 | 0xADDR;
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::
MVDoorBlueprint_get_DocumentationType(MVDoorBlueprint *this,MethodInfo *method)

{
  pMVar1 = (this->fields).doorLogic;
  if (pMVar1 != (MVDoor *)0x0) {
    uVar2 = (pMVar1->fields).doorConfig.docType;
    return uVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  MVar4 = (*pcVar3)();
  return MVar4;
}

