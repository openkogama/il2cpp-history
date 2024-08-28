
/* Void DeSelect() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint_DeSelect
               (MVDoorBlueprint *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pMStack_2 = (this->fields).editableCubeModel;
  if (pMStack_2 != (MVCubeModelInstance *)0x0) {
    pIStack_1 = (pMStack_2->klass->vtable).AddPreviewBox.methodPtr;
    (*(code *)(pMStack_2->klass->vtable).DeSelect.method)();
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
  this_00 = (MVCubeModelInstance__Class *)TypeInfo__WorldObjectTypes__MVDoor__MVDoor;
  if (pMVar1 == (MVDoor *)0x0) {
    (this->fields).doorLogic = (MVDoor *)0x0;
  }
  else {
    bVar2 = (TypeInfo__WorldObjectTypes__MVDoor__MVDoor->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVDoor__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__WorldObjectTypes__MVDoor__MVDoor)) goto code_?;
    (this->fields).doorLogic = pMVar1;
    bVar2 = (TypeInfo__WorldObjectTypes__MVDoor__MVDoor->_1).naturalAligment;
    this_00 = (MVCubeModelInstance__Class *)TypeInfo__WorldObjectTypes__MVDoor__MVDoor;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVDoor__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__WorldObjectTypes__MVDoor__MVDoor)) goto code_?;
  }
  ppMVar3 = &(this->fields).doorLogic;
  func_?((char)ppMVar3,pMVar1);
  if (*ppMVar3 != (MVDoor *)0x0) {
    ppMVar4 = &((*ppMVar3)->fields)._DoorBlueprint_k__BackingField;
    *ppMVar4 = this;
    func_?((char)ppMVar4,this);
    pMVar1 = *ppMVar3;
    if (pMVar1 != (MVDoor *)0x0) {
      DStack_5 = (pMVar1->fields).doorConfig.doorType;
      pMVar6 = (pMVar1->fields).doorObject;
      uVar7._0_4_ = (pMVar1->fields).doorConfig.toggleTime;
      uVar7._4_4_ = (pMVar1->fields).doorConfig.docType;
      if (pMVar6 != (MVDoorObject *)0x0) {
        pTStack_8 = (pMVar6->fields).animationRoot;
        pTVar9 = (pMVar1->fields)._._.transform;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3,
                          SUB42((pMVar1->fields).doorConfig.openValue,0),
                          (pMVar1->fields).doorConfig.closeValue,uVar7);
          cRam_? = '\x01';
        }
        this_00 = (MVCubeModelInstance__Class *)0x0;
        if (pTVar9 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar9,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                     (MethodInfo *)0x0);
          pMVar1 = (MVDoor *)
                    MVBlueprintBase::MVBlueprintBase_GetChild
                              ((MVBlueprintBase *)this,StringLiteral_DoorCubeModel,(MethodInfo *)0x0
                              );
          this_00 = TypeInfo__MVCubeModelInstance;
          if (pMVar1 != (MVDoor *)0x0) {
            bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
            if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
               ((MVCubeModelInstance__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
                TypeInfo__MVCubeModelInstance)) goto code_?;
            pMStack_10 = pMVar1;
            (*(code *)(pMVar1->klass->vtable).set_Visible.method)
                      (pMVar1,1,(pMVar1->klass->vtable).GetTargetPosition.methodPtr);
            if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
            }
            pVVar11 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_GetEditPoints
                                ((ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector_ *)
                                 &VStack_12,DStack_5,(MethodInfo *)0x0);
            uVar13._0_2_ = (pVVar11->Item1).x;
            uVar13._2_2_ = (pVVar11->Item1).y;
            uVar13._4_2_ = (pVVar11->Item1).z;
            uVar14 = (pVVar11->Item2).x;
            uVar15 = (pVVar11->Item2).y;
            uVar16 = (pVVar11->Item2).z;
            uStack_17 = (undefined4)uVar13;
            uStack_18 = uVar13._4_2_;
            uStack_19 = uVar14;
            uStack_20 = uVar15;
            iStack_21 = uVar16;
            this_00 = (MVCubeModelInstance__Class *)
                      func_?(TypeInfo__EditableCubeModelWrapper);
            max.y = uStack_20;
            max.x = uStack_19;
            min.z._0_1_ = (char)uStack_18;
            min.x = (undefined2)uStack_17;
            min.y = uStack_17._2_2_;
            min.z._1_1_ = (char)((ushort)uStack_18 >> 8);
            max.z = iStack_21;
            EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
                      ((EditableCubeModelWrapper *)this_00,(MVCubeModelInstance *)pMStack_10,min,max
                       ,0x14,(MethodInfo *)0x0);
            ppEVar22 = &(this->fields).editableCubeModelWrapper;
            *ppEVar22 = (EditableCubeModelWrapper *)this_00;
            func_?(ppEVar22,this_00);
            if (*ppEVar22 != (EditableCubeModelWrapper *)0x0) {
              pMVar23 = ((*ppEVar22)->fields).cubeModelBase;
              this_00 = (MVCubeModelInstance__Class *)&(this->fields).editableCubeModel;
              *(MVCubeModelInstance **)this_00 = pMVar23;
              func_?((char)this_00,pMVar23);
              pMVar23 = *(MVCubeModelInstance **)this_00;
              if (*ppMVar3 != (MVDoor *)0x0) {
                ppMVar24 = &((*ppMVar3)->fields).doorModelInstance;
                *ppMVar24 = pMVar23;
                func_?((char)ppMVar24,pMVar23);
                if ((*(MVCubeModelInstance **)this_00 != (MVCubeModelInstance *)0x0) &&
                   (pTVar9 = ((*(MVCubeModelInstance **)this_00)->fields)._._.transform,
                   pTVar9 != (Transform *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                            (pTVar9,pTStack_8,(MethodInfo *)0x0);
                  if (*(MVCubeModelInstance **)this_00 != (MVCubeModelInstance *)0x0) {
                    pMStack_10 = (MVDoor *)
                                 ((*(MVCubeModelInstance **)this_00)->fields)._._.transform;
                    pVVar25 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::
                              DoorData_GetCubeModelLocalPosition
                                        (&VStack_12,DStack_5,pTStack_8,(MethodInfo *)0x0);
                    if (pMStack_10 != (MVDoor *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_set_localPosition
                                ((Transform *)pMStack_10,*pVVar25,(MethodInfo *)0x0);
                      if (*(MVCubeModelInstance **)this_00 != (MVCubeModelInstance *)0x0) {
                        MVCubeModelInstance::MVCubeModelInstance_EnableCulling
                                  (*(MVCubeModelInstance **)this_00,(MethodInfo *)0x0);
                        pMVar1 = *ppMVar3;
                        if (pMVar1 != (MVDoor *)0x0) {
                          uVar26 = *(undefined4 *)((int)&(pMVar1->fields)._._.interactionFlags + 4);
                          piVar27 = &(pMVar1->fields)._._.interactionFlags;
                          *(uint *)piVar27 = (uint)*piVar27 | 0x30;
                          *(undefined4 *)((int)&(pMVar1->fields)._._.interactionFlags + 4) = uVar26;
                          pMVar23 = *(MVCubeModelInstance **)this_00;
                          if (pMVar23 != (MVCubeModelInstance *)0x0) {
                            uVar26 = *(undefined4 *)((int)&(pMVar23->fields)._._.interactionFlags + 4)
                            ;
                            piVar27 = &(pMVar23->fields)._._.interactionFlags;
                            *(uint *)piVar27 = (uint)*piVar27 | 0x30;
                            *(undefined4 *)((int)&(pMVar23->fields)._._.interactionFlags + 4) = uVar26
                            ;
                            if (*ppMVar3 != (MVDoor *)0x0) {
                              pDVar28 = (this->fields)._._._._.data;
                              ppDVar29 = &((*ppMVar3)->fields).useInteractorData;
                              *ppDVar29 = pDVar28;
                              func_?((char)ppDVar29,pDVar28);
                              if (*ppMVar3 != (MVDoor *)0x0) {
                                MVDoor::MVDoor_UpdateUseInteractor(*ppMVar3,(MethodInfo *)0x0);
                                if ((((*ppMVar3 != (MVDoor *)0x0) &&
                                     (pMVar6 = ((*ppMVar3)->fields).doorObject,
                                     pMVar6 != (MVDoorObject *)0x0)) &&
                                    (*(MVCubeModelInstance **)this_00 != (MVCubeModelInstance *)0x0)
                                    ) && (pTVar9 = (pMVar6->fields).cube, pTVar9 != (Transform *)0x0
                                         )) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_SetParent_1
                                            (pTVar9,((*(MVCubeModelInstance **)this_00)->fields)._._
                                                    .transform,0,(MethodInfo *)0x0);
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
        }
      }
    }
  }
  func_?();
  pMVar1 = extraout_EDX;
code_?:
  func_?((char)pMVar1,this_00);
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
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
  bVar2 = (TypeInfo__WorldObjectTypes__MVDoor__MVDoor->_1).naturalAligment;
  if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
     ((MVDoor__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
      TypeInfo__WorldObjectTypes__MVDoor__MVDoor)) {
    (this->fields).doorLogic = pMVar1;
    bVar2 = (TypeInfo__WorldObjectTypes__MVDoor__MVDoor->_1).naturalAligment;
    if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVDoor__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
        TypeInfo__WorldObjectTypes__MVDoor__MVDoor)) {
      func_?();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint_OnDataUpdate
               (MVDoorBlueprint *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_OnDataUpdate((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).doorLogic;
  if (pMVar1 != (MVDoor *)0x0) {
    pDVar2 = (this->fields)._._._._.data;
    ppDVar3 = &(pMVar1->fields).useInteractorData;
    *ppDVar3 = pDVar2;
    func_?(ppDVar3,pDVar2);
    if ((this->fields).doorLogic != (MVDoor *)0x0) {
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
      puVar4 = (undefined4 *)0x108;
      if (((bRam_? & pURam00000108 == (UseInteractor *)0x0) != 0) &&
         (pMRam00000100 != (MVWorldObjectClient *)0x0)) {
        if (iRam_? != 0) {
          pGVar5 = *(GameObject **)(iRam_? + 0x1c);
          triggerCollider = *(Collider **)(iRam_? + 0x24);
          wo = pMRam00000100;
          this_00 = (Predicate_1_UInt32_ *)func_?(TypeInfo__System__Func<int,_bool>);
          mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                    (this_00,(Object *)0x0,MethodInfo__WorldObjectTypes__MVDoor__MVDoor__Use_int_,
                     (MethodInfo *)0x0);
          this_01 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
          UseInteractor::UseInteractor__ctor
                    (this_01,wo,pGVar5,0,triggerCollider,(Func_2_Int32_Boolean_ *)this_00,
                     (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,2.5,0,(MethodInfo *)0x0);
          *puVar4 = this_01;
          func_?(puVar4,this_01);
          if (iRam_? != 0) {
            pTVar6 = *(TriggerBoxEvents **)(iRam_? + 0x2c);
            pOVar7 = (Object *)*puVar4;
            pEVar8 = (EventHandler_1_Object_ *)
                      func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      (pEVar8,pOVar7,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar6 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                        (pTVar6,(EventHandler_1_TriggerEventArgs_ *)pEVar8,(MethodInfo *)0x0);
              if (iRam_? != 0) {
                pTVar6 = *(TriggerBoxEvents **)(iRam_? + 0x2c);
                pOVar7 = (Object *)*puVar4;
                pEVar8 = (EventHandler_1_Object_ *)
                          func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                          (pEVar8,pOVar7,
                           MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,(MethodInfo *)0x0);
                if (pTVar6 != (TriggerBoxEvents *)0x0) {
                  TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                            (pTVar6,(EventHandler_1_TriggerEventArgs_ *)pEVar8,(MethodInfo *)0x0);
                  if (iRam_? != 0) {
                    pGVar5 = *(GameObject **)(iRam_? + 0x1c);
                    this_02 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
                    GameCoinLogic::GameCoinLogic__ctor(this_02,pGVar5,1,(MethodInfo *)0x0);
                    if ((UseInteractor *)*puVar4 != (UseInteractor *)0x0) {
                      UseInteractor::UseInteractor_AddRequirement
                                ((UseInteractor *)*puVar4,(UseRequirement *)this_02,
                                 (MethodInfo *)0x0);
                      if (iRam_? != 0) {
                        pGVar5 = *(GameObject **)(iRam_? + 0x1c);
                        this_03 = (LevelBasedUseRequirement *)
                                  func_?(TypeInfo__LevelBasedUseRequirement);
                        LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                                  (this_03,pGVar5,1,(MethodInfo *)0x0);
                        if ((UseInteractor *)*puVar4 != (UseInteractor *)0x0) {
                          UseInteractor::UseInteractor_AddRequirement
                                    ((UseInteractor *)*puVar4,(UseRequirement *)this_03,
                                     (MethodInfo *)0x0);
                          if (iRam_? != 0) {
                            pGVar5 = *(GameObject **)(iRam_? + 0x1c);
                            this_04 = (StarRequirement *)func_?(TypeInfo__StarRequirement);
                            StarRequirement::StarRequirement__ctor
                                      (this_04,pGVar5,1,(MethodInfo *)0x0);
                            if ((UseInteractor *)*puVar4 != (UseInteractor *)0x0) {
                              UseInteractor::UseInteractor_AddRequirement
                                        ((UseInteractor *)*puVar4,(UseRequirement *)this_04,
                                         (MethodInfo *)0x0);
                              if (iRam_? != 0) {
                                pGVar5 = *(GameObject **)(iRam_? + 0x1c);
                                this_05 = (GameRankRequirement *)
                                          func_?(TypeInfo__GameRankRequirement);
                                GameRankRequirement::GameRankRequirement__ctor
                                          (this_05,pGVar5,(MVWorldObjectClient *)0x0,1,
                                           (MethodInfo *)0x0);
                                if ((UseInteractor *)*puVar4 != (UseInteractor *)0x0) {
                                  UseInteractor::UseInteractor_AddRequirement
                                            ((UseInteractor *)*puVar4,(UseRequirement *)this_05,
                                             (MethodInfo *)0x0);
                                  if (iRam_? != 0) {
                                    pUVar9 = *(UseRequirement__Class **)(iRam_? + 0x1c);
                                    iVar10 = func_?(
                                                  TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedCheckNoCost
                                                  );
                                    pMVar11 = 
                                    MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CheckIfOpen__;
                                    *(Il2CppMethodPointer *)(iVar10 + 8) =
                                         MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CheckIfOpen__
                                         ->virtualMethodPointer;
                                    *(MethodInfo **)(iVar10 + 0x14) = pMVar11;
                                    *(undefined4 *)(iVar10 + 0x10) = 0;
                                    func_?((undefined4 *)(iVar10 + 0x10),0);
                                    uVar12 = pMVar11->parameters_count;
                                    *(int *)(iVar10 + 0x20) = iVar10;
                                    cVar13 = func_?(pMVar11);
                                    if ((cVar13 == '\0') || (uVar12 != 0)) {
                                      *(undefined4 *)(iVar10 + 0x20) =
                                           *(undefined4 *)(iVar10 + 0x10);
                                      puVar14 = *(undefined **)(iVar10 + 8);
                                    }
                                    else {
                                      puVar14 = &UNK_?;
                                    }
                                    *(undefined **)(iVar10 + 0xc) = puVar14;
                                    *(undefined **)(iVar10 + 0x1c) = &UNK_?;
                                    useRequirement =
                                         (UseRequirement *)
                                         func_?(
                                                  TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement
                                                  );
                                    if (cRam_? == '\0') {
                                      func_?(&
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                  );
                                      func_?(&
                                                  MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
                                                  );
                                      cRam_? = '\x01';
                                    }
                                    useRequirement[1].klass = (UseRequirement__Class *)0x0;
                                    useRequirement[1].monitor = (MonitorData *)0x0;
                                    *(undefined4 *)&useRequirement[1].fields = 0;
                                    useRequirement[2].klass = (UseRequirement__Class *)0xffffffff;
                                    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                                    UxmlObjectListAttributeDescription`1[System::Object]::
                                    UxmlObjectListAttributeDescription_1_System_Object___ctor
                                              ((UxmlObjectListAttributeDescription_1_System_Object_
                                                *)useRequirement,(MethodInfo *)0x0);
                                    useRequirement[3].klass = pUVar9;
                                    func_?(useRequirement + 3,pUVar9);
                                    pUVar15 = &useRequirement[3].fields;
                                    *(int *)pUVar15 = iVar10;
                                    func_?(pUVar15,iVar10);
                                    *(bool *)&useRequirement[4].klass = *(int *)pUVar15 != 0;
                                    this_06 = MVGameControllerBase::
                                              MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                                        ((MethodInfo *)0x0);
                                    this_07 = (Action_3_Int32_Int32_ByteEnum_ *)
                                              func_?(
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                  );
                                    mscorlib.dll::System::Action`3[Int32,Int32,ByteEnum]::
                                    Action_3_Int32_Int32_ByteEnum___ctor
                                              (this_07,(Object *)useRequirement,
                                               MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
                                               ,(MethodInfo *)0x0);
                                    if (this_06 != (SpawnRoleDataMediator *)0x0) {
                                      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                                      Mediator::SpawnRoleDataMediator::
                                      SpawnRoleDataMediator_add_OnKilled
                                                (this_06,(
                                                  Action_3_Int32_Int32_MV_Common_PlayerKilledByType_
                                                  *)this_07,(MethodInfo *)0x0);
                                      uVar16 = useRequirement[1].klass;
                                      uVar17 = useRequirement[1].monitor;
                                      fVar18 = (float)uVar17 + _UNK_?;
                                      useRequirement[1].klass =
                                           (UseRequirement__Class *)((float)uVar16 + 0.0);
                                      useRequirement[1].monitor = (MonitorData *)fVar18;
                                      *(float *)&useRequirement[1].fields =
                                           *(float *)&useRequirement[1].fields + 0.0;
                                      if (pURam00000108 != (UseInteractor *)0x0) {
                                        UseInteractor::UseInteractor_AddRequirement
                                                  (pURam00000108,useRequirement,(MethodInfo *)0x0);
                                        if (pURam00000108 != (UseInteractor *)0x0) {
                                          UseInteractor::UseInteractor_UpdateData
                                                    (pURam00000108,pDRam00000128,(MethodInfo *)0x0);
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
        func_?();
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      if (bRam_? == 0) {
        if (pURam00000108 != (UseInteractor *)0x0) {
          MVDoor::MVDoor_DestroyUseInteractor((MVDoor *)0x0,(MethodInfo *)0x0);
        }
      }
      else if (pURam00000108 != (UseInteractor *)0x0) {
        UseInteractor::UseInteractor_UpdateData(pURam00000108,pDRam00000128,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
        bVar4 = (*(code *)(pEVar3->klass->vtable).OnEnterObject.method)();
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
        pIStack5 = pEVar4[1]._0.image;
        pEStack6 = e;
        bVar7 = (*(code *)(pEVar4->vtable).OnExitObject.method)();
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
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pMVar2 = (this->fields).editableCubeModel;
  if (pMVar2 != (MVCubeModelInstance *)0x0) {
    pIStack_1 = (pMVar2->klass->vtable).DeSelect.methodPtr;
    fStack_3 = color.b;
    fStack_4 = color.a;
    (*(code *)(pMVar2->klass->vtable).Select_1.method)(pMVar2,color.r,color.g);
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
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshFilter_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::MeshFilter>__
                   );
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).doorLogic;
  if ((pMVar1 != (MVDoor *)0x0) &&
     (pMVar2 = (pMVar1->fields).doorObject, pMVar2 != (MVDoorObject *)0x0)) {
    this_00 = (pMVar2->fields).cube;
    pMVar3 = (this->fields).editableCubeModel;
    if (pMVar3 != (MVCubeModelInstance *)0x0) {
      pBVar4 = MVCubeModelBase::MVCubeModelBase_GetBounds
                         ((Bounds *)&stack0xffffffcc,(MVCubeModelBase *)pMVar3,(MethodInfo *)0x0);
      fVar5 = (pBVar4->m_Extents).z;
      if (this_00 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (this_00,pBVar4->m_Center,(MethodInfo *)0x0);
        this_01 = (MeshFilter *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                            ((Component *)this_00,
                             UnityEngine__MeshFilter_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::MeshFilter>__
                            );
        if (this_01 != (MeshFilter *)0x0) {
          pMVar6 = this_01;
          pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                             (this_01,(MethodInfo *)0x0);
          if (pMVar7 != (Mesh *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(pMVar7,(MethodInfo *)0x0);
            uVar8 = 0;
            puVar9 = &UNK_?;
            pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                               (this_01,(MethodInfo *)0x0);
            pMVar3 = (this->fields).editableCubeModel;
            if (pMVar3 != (MVCubeModelInstance *)0x0) {
              bounds.m_Center.y = (float)puVar9;
              bounds.m_Center.x = (float)pMVar6;
              bounds.m_Center.z = (float)this_01;
              bounds.m_Extents.x = (float)uVar8;
              bounds.m_Extents.y = (float)uVar8;
              bounds.m_Extents.z = fVar5;
              corners = MVCubeModelInstance::MVCubeModelInstance_GetCorners
                                  (pMVar3,bounds,(MethodInfo *)0x0);
              if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              SharedCubeFunctions::SharedCubeFunctions_AddCubeMesh
                        (pMVar7,corners,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  piVar1 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0x8000;
  piVar1 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0x1000;
  piVar1 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0x2000;
  piVar1 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0x100;
  piVar1 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0x100000;
  piVar1 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0x200000;
  piVar1 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0x400000;
  uVar2 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
  piVar1 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0xADDR;
  *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar2;
  iVar3 = (this->fields)._._._.interactionFlags;
  puVar4 = (uint *)((int)&(this->fields)._._._.interactionFlags + 4);
  *puVar4 = *puVar4 | 2;
  *(int *)&(this->fields)._._._.interactionFlags = (int)iVar3;
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

