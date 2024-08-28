
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
  iVar1 = (this->fields).__1__state;
  pPVar2 = (this->fields).__4__this;
  if ((iVar1 != 0) && (iVar1 != 1)) {
    return 0;
  }
  (this->fields).__1__state = -1;
  pIVar3 = (IBulletImpactVisualizer__Class *)this;
  if (pPVar2 != (PickupItemFlamethrower *)0x0) {
    if ((pPVar2->fields).isFlaming == 0) {
      pLStack_4 = (List_1_VoxelHit_ *)
                  ((pPVar2->fields).flamerMinimumBurnTime + (pPVar2->fields).flamerStartTime);
      fStack_5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if ((float)pLStack_4 < fStack_5) {
        return 0;
      }
    }
    iStack_6 = (pPVar2->fields).currentFuel.currentCryptoKey;
    VStack_7.x = *(float *)&(pPVar2->fields).currentFuel.hiddenValue;
    VStack_7.y = (float)(pPVar2->fields).currentFuel.hiddenValueOld;
    VStack_7.z = (pPVar2->fields).currentFuel.fakeValue;
    unaff_ESI = *(MVWorldObjectClient **)&(pPVar2->fields).currentFuel.inited;
    pBVar8 = (pPVar2->fields).currentFuel.hiddenValueOld;
    fVar9 = (pPVar2->fields).currentFuel.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      pBVar8 = (Byte__Array *)VStack_7.y;
      fVar9 = VStack_7.z;
    }
    value.hiddenValue = (ACTkByte4)VStack_7.x;
    value.currentCryptoKey = iStack_6;
    value.hiddenValueOld = pBVar8;
    value.fakeValue = fVar9;
    value._16_4_ = unaff_ESI;
    pLStack_4 = (List_1_VoxelHit_ *)
                Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    if (((float)pLStack_4 <= 0.0) &&
       (cVar10 = (*(code *)(pPVar2->klass->vtable).get_HasUnlimitedAmmo.method)
                           (pPVar2,(pPVar2->klass->vtable).get_CanUnequip.methodPtr), cVar10 == '\0'
       )) {
      return 0;
    }
    this_00 = (pPVar2->fields)._.muzzlePoint;
    if (this_00 != (Transform *)0x0) {
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_7,this_00,(MethodInfo *)0x0);
      uStack_12._0_4_ = pVVar11->x;
      uStack_12._4_4_ = pVVar11->y;
      unaff_ESI = (MVWorldObjectClient *)pVVar11->z;
      pMVar13 = (pPVar2->fields)._.owner;
      if (pMVar13 != (MVPickupOwner *)0x0) {
        pVVar11 = MVPickupOwner::MVPickupOwner_get_LookDirection
                            (&VStack_7,pMVar13,(MethodInfo *)0x0);
        uStack_14 = uStack_12;
        pMStack_15 = unaff_ESI;
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            (&VStack_7,*pVVar11,(MethodInfo *)0x0);
        uVar16 = pVVar11->x;
        uVar17 = pVVar11->y;
        fStack_18 = pVVar11->z;
        uStack_19 = uVar16;
        uStack_20 = uVar17;
        unaff_ESI = (MVWorldObjectClient *)
                    UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                              (StringLiteral_Player,(MethodInfo *)0x0);
        fStack_5 = (pPVar2->fields).hitRadius;
        pMVar13 = (pPVar2->fields)._.owner;
        pLStack_4 = (List_1_VoxelHit_ *)(pPVar2->fields).maxRange;
        if (pMVar13 != (MVPickupOwner *)0x0) {
          ignoreWoIds = (HashSet_1_System_Int32_ *)
                        (*(code *)(pMVar13->klass->vtable).get_IgnoreWOIDs.method)();
          unaff_ESI = (MVWorldObjectClient *)((uint)unaff_ESI & 0x1f);
          ray.m_Origin.z = (float)pMStack_15;
          ray.m_Origin.x = (float)(undefined4)uStack_14;
          ray.m_Origin.y = (float)uStack_14._4_4_;
          ray.m_Direction.x = (float)uStack_19;
          ray.m_Direction.y = (float)uStack_20;
          ray.m_Direction.z = fStack_18;
          pLStack_4 = CollisionDetection::CollisionDetection_MVSphereCastAll
                                (ray,fStack_5,(float)pLStack_4,ignoreWoIds,1 << (sbyte)unaff_ESI,
                                 (MethodInfo *)0x0);
          fStack_5 = 0.0;
          x = (IBulletImpactVisualizer__Class *)this;
          if (pLStack_4 != (List_1_VoxelHit_ *)0x0) {
            do {
              if ((pLStack_4->fields)._size <= (int)fStack_5) {
                this_03 = (SubscribableVariable_1_System_Single_ *)func_?();
                SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                          (this_03,0.2,(MethodInfo *)0x0);
                ppOVar21 = &(this->fields).__2__current;
                *ppOVar21 = (Object *)this_03;
                func_?(ppOVar21,this_03);
                (this->fields).__1__state = 1;
                return 1;
              }
              iVar1 = func_?(&stack0xfffffef0,pLStack_4,fStack_5);
              unaff_ESI = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                                    (*(Transform **)(iVar1 + 0x38),(MethodInfo *)0x0);
              if (unaff_ESI != (MVWorldObjectClient *)0x0) {
                this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                pIVar3 = x;
                if ((this_01 == (MVNetworkGame *)0x0) ||
                   (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                        (this_01,(MethodInfo *)0x0), this_02 == (MVLocalPlayer *)0x0
                   )) break;
                bVar22 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                   ((MVPlayer *)this_02,unaff_ESI,(MethodInfo *)0x0);
                if (bVar22 == 0) {
                  x = (IBulletImpactVisualizer__Class *)
                      MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                (unaff_ESI,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                     ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar22 != 0) {
                    uStack_12 = CONCAT44((pPVar2->fields)._.owner,(undefined4)uStack_12);
                    pIVar23 = FlamethrowerHitPackage::FlamethrowerHitPackage_Create
                                        (&IStack_24,(MethodInfo *)0x0);
                    pIVar3 = x;
                    if (x == (IBulletImpactVisualizer__Class *)0x0) break;
                    uVar25._0_1_ = pIVar23->interactionType;
                    uVar25._1_1_ = pIVar23->playerKilledByType;
                    uVar25._2_2_ = *(undefined2 *)&pIVar23->field_0x12;
                    func_?(7,x,uStack_12._4_4_,pIVar23->damage,(pIVar23->impulse).x,
                                    (pIVar23->impulse).y,(pIVar23->impulse).z,uVar25,0);
                    iVar1 = func_?(unaff_ESI,TypeInfo__IBulletImpactVisualizer);
                    if (iVar1 != 0) {
                      puVar26 = (undefined4 *)
                                func_?(&stack0xfffffef0,pLStack_4,fStack_5,
                                                MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                                               );
                      pIVar27 = TypeInfo__IBulletImpactVisualizer;
                      uVar25 = *puVar26;
                      uVar28 = puVar26[1];
                      uVar29 = puVar26[2];
                      uVar30 = puVar26[3];
                      uVar31 = puVar26[4];
                      uVar32 = puVar26[5];
                      uVar33 = puVar26[6];
                      uVar34 = puVar26[7];
                      uVar35 = puVar26[8];
                      uVar36 = puVar26[9];
                      uVar37 = puVar26[10];
                      uVar38 = puVar26[0xb];
                      IStack_24.impulse.x = (float)puVar26[0xc];
                      IStack_24.impulse.y = (float)puVar26[0xd];
                      IStack_24.impulse.z = (float)puVar26[0xe];
                      IStack_24._16_4_ = puVar26[0xf];
                      VStack_7._4_8_ = *(undefined8 *)(puVar26 + 0x10);
                      pMVar13 = (pPVar2->fields)._.owner;
                      if ((pMVar13 == (MVPickupOwner *)0x0) ||
                         (pMVar39 = (pMVar13->fields)._.worldObjectParent,
                         pMVar39 == (MVWorldObjectClient *)0x0)) break;
                      uStack_12 = CONCAT44((pMVar39->fields)._.ownerActorNr,(undefined4)uStack_12);
                      iVar1 = func_?(unaff_ESI,TypeInfo__IBulletImpactVisualizer);
                      x = TypeInfo__IBulletImpactVisualizer;
                      pIVar3 = pIVar27;
                      if ((iVar1 == 0) ||
                         (iVar1 = func_?(unaff_ESI,TypeInfo__IBulletImpactVisualizer),
                         pIVar3 = x, iVar1 == 0)) goto code_?;
                      func_?(0,TypeInfo__IBulletImpactVisualizer,iVar1,uVar25,uVar28,uVar29,
                                      uVar30,uVar31,uVar32,uVar33,uVar34,uVar35,uVar36,uVar37,uVar38
                                      ,IStack_24.impulse.x,IStack_24.impulse.y,IStack_24.impulse.z,
                                      IStack_24._16_4_,VStack_7.y,VStack_7.z,(undefined4)uStack_14
                                      ,uStack_14._4_4_,pMStack_15,uStack_19,
                                      CONCAT44(fStack_18,uStack_20),uStack_12._4_4_,0);
                    }
                  }
                }
              }
              fStack_5 = (float)((int)fStack_5 + 1);
            } while( true );
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?(unaff_ESI,pIVar3);
  pcVar40 = (code *)swi(3);
  bVar22 = (*pcVar40)();
  return bVar22;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PickupItemFlamethrower+<DoFlaming>d__16::
     PickupItemFlamethrower_DoFlaming_d_16_System_Collections_IEnumerator_Reset
               (PickupItemFlamethrower_DoFlaming_d_16 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
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

