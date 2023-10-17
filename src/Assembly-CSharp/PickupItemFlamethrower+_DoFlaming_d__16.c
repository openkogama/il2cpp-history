
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PickupItemFlamethrower+<DoFlaming>d__16::
     PickupItemFlamethrower_DoFlaming_d_16_MoveNext
               (PickupItemFlamethrower_DoFlaming_d_16 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IBulletImpactVisualizer);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    func_?();
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    func_?(&StringLiteral_Player);
    cRam_? = '\x01';
  }
  RStack_1.m_Origin.x = 0.0;
  RStack_1.m_Origin.y = 0.0;
  RStack_1.m_Origin.z = 0.0;
  RStack_1.m_Direction.x = 0.0;
  RStack_1.m_Direction.y = 0.0;
  RStack_1.m_Direction.z = 0.0;
  iVar2 = (this->fields).__1__state;
  pPVar3 = (this->fields).__4__this;
  if ((iVar2 != 0) && (iVar2 != 1)) {
    return 0;
  }
  (this->fields).__1__state = -1;
  pIVar4 = (IBulletImpactVisualizer__Class *)this;
  pPStack_5 = pPVar3;
  if (pPVar3 != (PickupItemFlamethrower *)0x0) {
    if ((pPVar3->fields).isFlaming == 0) {
      pLStack_6 = (List_1_VoxelHit_ *)
                  ((pPVar3->fields).flamerMinimumBurnTime + (pPVar3->fields).flamerStartTime);
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      uStack_8 = CONCAT44(fVar7,(undefined4)uStack_8);
      if ((float)pLStack_6 < fVar7) {
        return 0;
      }
    }
    fStack_9 = (float)(pPVar3->fields).currentFuel.currentCryptoKey;
    VStack_10.x = *(float *)&(pPVar3->fields).currentFuel.hiddenValue;
    VStack_10.y = (float)(pPVar3->fields).currentFuel.hiddenValueOld;
    VStack_10.z = (pPVar3->fields).currentFuel.fakeValue;
    unaff_ESI = *(MVWorldObjectClient **)&(pPVar3->fields).currentFuel.inited;
    pBVar11 = (pPVar3->fields).currentFuel.hiddenValueOld;
    fVar7 = (pPVar3->fields).currentFuel.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      pBVar11 = (Byte__Array *)VStack_10.y;
      fVar7 = VStack_10.z;
    }
    value.hiddenValue = (ACTkByte4)VStack_10.x;
    value.currentCryptoKey = (int32_t)fStack_9;
    value.hiddenValueOld = pBVar11;
    value.fakeValue = fVar7;
    value._16_4_ = unaff_ESI;
    fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    uStack_8 = CONCAT44(fVar7,(undefined4)uStack_8);
    if ((fVar7 <= 0.0) &&
       (cVar12 = (*(pPVar3->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                           (pPVar3,(pPVar3->klass->vtable).get_HasUnlimitedAmmo.method),
       cVar12 == '\0')) {
      return 0;
    }
    this_00 = (pPVar3->fields)._.muzzlePoint;
    if (this_00 != (Transform *)0x0) {
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_10,this_00,(MethodInfo *)0x0);
      uStack_8._0_4_ = pVVar13->x;
      uStack_8._4_4_ = pVVar13->y;
      unaff_ESI = (MVWorldObjectClient *)pVVar13->z;
      pMVar14 = (pPVar3->fields)._.owner;
      if (pMVar14 != (MVPickupOwner *)0x0) {
        pVVar13 = MVPickupOwner::MVPickupOwner_get_LookDirection
                            (&VStack_10,pMVar14,(MethodInfo *)0x0);
        origin.z = (float)unaff_ESI;
        origin.x = (float)(undefined4)uStack_8;
        origin.y = uStack_8._4_4_;
        UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
                  (&RStack_1,origin,*pVVar13,(MethodInfo *)0x0);
        unaff_ESI = (MVWorldObjectClient *)
                    UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                              (StringLiteral_Player,(MethodInfo *)0x0);
        pMVar14 = (pPVar3->fields)._.owner;
        fStack_9 = RStack_1.m_Origin.x;
        VStack_10.x = RStack_1.m_Origin.y;
        VStack_10.z = RStack_1.m_Direction.x;
        VStack_10.y = RStack_1.m_Origin.z;
        fStack_15 = RStack_1.m_Direction.y;
        fStack_16 = RStack_1.m_Direction.z;
        pLStack_6 = (List_1_VoxelHit_ *)(pPVar3->fields).hitRadius;
        uStack_8 = CONCAT44((pPVar3->fields).maxRange,(undefined4)uStack_8);
        if (pMVar14 != (MVPickupOwner *)0x0) {
          ignoreWoIds = (HashSet_1_System_Int32_ *)
                        (*(pMVar14->klass->vtable).get_IgnoreWOIDs.methodPtr)();
          unaff_ESI = (MVWorldObjectClient *)((uint)unaff_ESI & 0x1f);
          ray.m_Origin.y = VStack_10.x;
          ray.m_Origin.x = fStack_9;
          ray.m_Origin.z = VStack_10.y;
          ray.m_Direction.x = VStack_10.z;
          ray.m_Direction.y = (float)_fStack_1c;
          ray.m_Direction.z = SUB84(_fStack_1c,4);
          pLStack_6 = CollisionDetection::CollisionDetection_MVSphereCastAll
                                (ray,(float)pLStack_6,uStack_8._4_4_,ignoreWoIds,
                                 1 << (sbyte)unaff_ESI,(MethodInfo *)0x0);
          iVar2 = 0;
          x = (IBulletImpactVisualizer__Class *)this;
          if (pLStack_6 != (List_1_VoxelHit_ *)0x0) {
            for (; pIVar4 = x, iVar2 < (pLStack_6->fields)._size; iVar2 = iVar2 + 1) {
              iVar17 = func_?(&stack0xfffffed8,pLStack_6,iVar2);
              unaff_ESI = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                                    (*(Transform **)(iVar17 + 0x38),(MethodInfo *)0x0);
              if (unaff_ESI != (MVWorldObjectClient *)0x0) {
                this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((this_01 == (MVNetworkGame *)0x0) ||
                   (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                        (this_01,(MethodInfo *)0x0), this_02 == (MVLocalPlayer *)0x0
                   )) goto code_?;
                bVar18 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                   ((MVPlayer *)this_02,unaff_ESI,(MethodInfo *)0x0);
                if (bVar18 == 0) {
                  x = (IBulletImpactVisualizer__Class *)
                      MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                (unaff_ESI,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  bVar18 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                     ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar18 != 0) {
                    uStack_8 = CONCAT44((pPStack_5->fields)._.owner,(undefined4)uStack_8);
                    pIVar19 = FlamethrowerHitPackage::FlamethrowerHitPackage_Create
                                        (&IStack_20,(MethodInfo *)0x0);
                    pIVar4 = x;
                    if (x == (IBulletImpactVisualizer__Class *)0x0) goto code_?;
                    uVar21._0_1_ = pIVar19->interactionType;
                    uVar21._1_1_ = pIVar19->playerKilledByType;
                    uVar21._2_2_ = *(undefined2 *)&pIVar19->field_0x12;
                    func_?(7,x,uStack_8._4_4_,pIVar19->damage,(pIVar19->impulse).x,
                                    (pIVar19->impulse).y,(pIVar19->impulse).z,uVar21,0);
                    iVar17 = func_?(unaff_ESI,TypeInfo__IBulletImpactVisualizer);
                    if (iVar17 != 0) {
                      puVar22 = (undefined4 *)
                                func_?(&stack0xfffffed8,pLStack_6,iVar2,
                                                MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                                               );
                      fVar23 = RStack_1.m_Direction.x;
                      fVar24 = RStack_1.m_Origin.z;
                      fVar25 = RStack_1.m_Origin.y;
                      fVar7 = RStack_1.m_Origin.x;
                      pIVar26 = TypeInfo__IBulletImpactVisualizer;
                      uVar21 = *puVar22;
                      uVar27 = puVar22[1];
                      uVar28 = puVar22[2];
                      uVar29 = puVar22[3];
                      uVar30 = puVar22[4];
                      uVar31 = puVar22[5];
                      uVar32 = puVar22[6];
                      uVar33 = puVar22[7];
                      uVar34 = puVar22[8];
                      uVar35 = puVar22[9];
                      uVar36 = puVar22[10];
                      uVar37 = puVar22[0xb];
                      IStack_20.impulse.x = (float)puVar22[0xc];
                      IStack_20.impulse.y = (float)puVar22[0xd];
                      IStack_20.impulse.z = (float)puVar22[0xe];
                      IStack_20._16_4_ = puVar22[0xf];
                      VStack_10._4_8_ = *(undefined8 *)(puVar22 + 0x10);
                      pMVar14 = (pPStack_5->fields)._.owner;
                      fStack_15 = RStack_1.m_Direction.y;
                      fStack_16 = RStack_1.m_Direction.z;
                      if ((pMVar14 == (MVPickupOwner *)0x0) ||
                         (pMVar38 = (pMVar14->fields)._.worldObjectParent,
                         pMVar38 == (MVWorldObjectClient *)0x0)) goto code_?;
                      uStack_8 = CONCAT44((pMVar38->fields)._.ownerActorNr,(undefined4)uStack_8);
                      iVar17 = func_?(unaff_ESI,TypeInfo__IBulletImpactVisualizer);
                      x = TypeInfo__IBulletImpactVisualizer;
                      pIVar4 = pIVar26;
                      if ((iVar17 == 0) ||
                         (iVar17 = func_?(unaff_ESI,TypeInfo__IBulletImpactVisualizer),
                         pIVar4 = x, iVar17 == 0)) goto code_?;
                      func_?(0,TypeInfo__IBulletImpactVisualizer,iVar17,uVar21,uVar27,uVar28,
                                      uVar29,uVar30,uVar31,uVar32,uVar33,uVar34,uVar35,uVar36,uVar37,
                                      IStack_20.impulse.x,IStack_20.impulse.y,IStack_20.impulse.z,
                                      IStack_20._16_4_,VStack_10.y,VStack_10.z,fVar7,fVar25,fVar24,
                                      fVar23,_fStack_1c,uStack_8._4_4_,0);
                    }
                  }
                }
              }
            }
            this_03 = (SubscribableVariableBase_1_System_Single_ *)func_?();
            unaff_ESI = (MVWorldObjectClient *)0x0;
            if (this_03 != (SubscribableVariableBase_1_System_Single_ *)0x0) {
              SubscribableVariableBase`1[System::Single]::
              SubscribableVariableBase_1_System_Single___ctor(this_03,0.2,(MethodInfo *)0x0);
              (this->fields).__2__current = (Object *)this_03;
              func_?(&(this->fields).__2__current,this_03);
              (this->fields).__1__state = 1;
              return 1;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?(unaff_ESI,pIVar4);
  pcVar39 = (code *)swi(3);
  bVar18 = (*pcVar39)();
  return bVar18;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PickupItemFlamethrower+<DoFlaming>d__16::
     PickupItemFlamethrower_DoFlaming_d_16_System_Collections_IEnumerator_Reset
               (PickupItemFlamethrower_DoFlaming_d_16 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__PickupItemFlamethrower___DoFlaming_d__16__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

