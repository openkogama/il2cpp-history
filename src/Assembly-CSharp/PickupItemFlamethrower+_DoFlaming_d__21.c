
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PickupItemFlamethrower+<DoFlaming>d__21::
     PickupItemFlamethrower_DoFlaming_d_21_MoveNext
               (PickupItemFlamethrower_DoFlaming_d_21 *this,MethodInfo *method)

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
  uStack_1 = 0;
  uStack_2 = 0;
  fStack_3 = 0.0;
  iVar4 = (this->fields).__1__state;
  pPVar5 = (this->fields).__4__this;
  if ((iVar4 != 0) && (iVar4 != 1)) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if (pPVar5 != (PickupItemFlamethrower *)0x0) {
    if ((pPVar5->fields).isFlaming == 0) {
      pLStack_6 = (List_1_VoxelHit_ *)
                  ((pPVar5->fields).flamerMinimumBurnTime + (pPVar5->fields).flamerStartTime);
      pMStack_7 = (MVPickupOwner *)
                  UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if ((float)pLStack_6 < (float)pMStack_7) {
        return 0;
      }
    }
    auStack_8._4_4_ = (pPVar5->fields).currentFuel.currentCryptoKey;
    auStack_8._8_4_ = (pPVar5->fields).currentFuel.hiddenValue;
    auStack_8._12_4_ = (pPVar5->fields).currentFuel.hiddenValueOld;
    auStack_8._16_4_ = (pPVar5->fields).currentFuel.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValue.b1 = auStack_8[8];
    value.hiddenValue.b2 = auStack_8[9];
    value.hiddenValue.b3 = auStack_8[10];
    value.hiddenValue.b4 = auStack_8[0xb];
    value.currentCryptoKey = auStack_8._4_4_;
    value.hiddenValueOld = (Byte__Array *)auStack_8._12_4_;
    value.fakeValue = (float)auStack_8._16_4_;
    value.inited = (pPVar5->fields).currentFuel.inited;
    value._17_3_ = *(undefined3 *)&(pPVar5->fields).currentFuel.field_0x11;
    pMStack_7 = (MVPickupOwner *)
                Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    if (((float)pMStack_7 <= 0.0) &&
       (cVar9 = (*(code *)(pPVar5->klass->vtable).get_HasUnlimitedAmmo.method)
                          (pPVar5,(pPVar5->klass->vtable).get_HasPercentageAmmo.methodPtr),
       cVar9 == '\0')) {
      return 0;
    }
    this_00 = (pPVar5->fields)._.muzzlePoint;
    if (this_00 != (Transform *)0x0) {
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)(auStack_8 + 8),this_00,(MethodInfo *)0x0);
      uStack_11._0_4_ = pVVar10->x;
      uStack_11._4_4_ = pVVar10->y;
      fVar12 = pVVar10->z;
      pMVar13 = (pPVar5->fields)._.owner;
      if (pMVar13 != (MVPickupOwner *)0x0) {
        pVVar10 = MVPickupOwner::MVPickupOwner_get_LookDirection
                            ((Vector3 *)(auStack_8 + 8),pMVar13,(MethodInfo *)0x0);
        uStack_14 = uStack_11;
        fStack_15 = fVar12;
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)(auStack_8 + 8),*pVVar10,(MethodInfo *)0x0);
        uVar16 = pVVar10->x;
        uVar17 = pVVar10->y;
        fStack_3 = pVVar10->z;
        uStack_1 = uVar16;
        uStack_2 = uVar17;
        iVar18 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_Player,(MethodInfo *)0x0);
        pLStack_6 = (List_1_VoxelHit_ *)(pPVar5->fields).hitRadius;
        pMVar13 = (pPVar5->fields)._.owner;
        pMStack_7 = (MVPickupOwner *)(pPVar5->fields).maxRange;
        if (pMVar13 != (MVPickupOwner *)0x0) {
          ignoreWoIds = (HashSet_1_System_Int32_ *)
                        (*(code *)(pMVar13->klass->vtable).get_IgnoreWOIDs.method)();
          ray.m_Origin.z = fStack_15;
          ray.m_Origin.x = (float)(undefined4)uStack_14;
          ray.m_Origin.y = (float)uStack_14._4_4_;
          ray.m_Direction.x = (float)uStack_1;
          ray.m_Direction.y = (float)uStack_2;
          ray.m_Direction.z = fStack_3;
          pLStack_6 = CollisionDetection::CollisionDetection_MVSphereCastAll
                                (ray,(float)pLStack_6,(float)pMStack_7,ignoreWoIds,
                                 1 << ((byte)iVar18 & 0x1f),(MethodInfo *)0x0);
          iVar4 = 0;
          if (pLStack_6 != (List_1_VoxelHit_ *)0x0) {
            do {
              if ((pLStack_6->fields)._size <= iVar4) {
                this_03 = (SubscribableVariable_1_System_Single_ *)func_?();
                SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                          (this_03,0.2,(MethodInfo *)0x0);
                (this->fields).__2__current = (Object *)this_03;
                func_?(&(this->fields).__2__current,this_03);
                (this->fields).__1__state = 1;
                return 1;
              }
              iVar19 = func_?(&stack0xffffff30,pLStack_6,iVar4);
              pMVar20 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                                  (*(Transform **)(iVar19 + 0x38),(MethodInfo *)0x0);
              uStack_11 = CONCAT44(pMVar20,(undefined4)uStack_11);
              if (pMVar20 != (MVWorldObjectClient *)0x0) {
                this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((this_01 == (MVNetworkGame *)0x0) ||
                   (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                        (this_01,(MethodInfo *)0x0), this_02 == (MVLocalPlayer *)0x0
                   )) break;
                bVar21 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                  ((MVPlayer *)this_02,pMVar20,(MethodInfo *)0x0);
                if (bVar21 == 0) {
                  x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                (pMVar20,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  bVar21 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar21 == 0) {
                    pMStack_7 = (pPVar5->fields)._.owner;
                    pIVar22 = FlamethrowerHitPackage::FlamethrowerHitPackage_Create
                                        ((InteractionData *)auStack_8,(MethodInfo *)0x0);
                    if (x == (InteractionDataHandlerBase *)0x0) break;
                    uVar23._0_1_ = pIVar22->interactionType;
                    uVar23._1_1_ = pIVar22->playerKilledByType;
                    uVar23._2_2_ = *(undefined2 *)&pIVar22->field_0x12;
                    func_?(7,x,pMStack_7,pIVar22->damage,(pIVar22->impulse).x,
                                    (pIVar22->impulse).y,(pIVar22->impulse).z,uVar23,0);
                    iVar19 = func_?(uStack_11._4_4_,TypeInfo__IBulletImpactVisualizer);
                    if (iVar19 != 0) {
                      puVar24 = (undefined4 *)
                                func_?(&stack0xffffff30,pLStack_6,iVar4,
                                                MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                                               );
                      pMVar13 = (pPVar5->fields)._.owner;
                      if ((pMVar13 == (MVPickupOwner *)0x0) ||
                         (pMVar20 = (pMVar13->fields)._.worldObjectParent,
                         pMVar20 == (MVWorldObjectClient *)0x0)) break;
                      func_?(0,TypeInfo__IBulletImpactVisualizer,iVar19,*puVar24,puVar24[1]
                                      ,puVar24[2],puVar24[3],puVar24[4],puVar24[5],puVar24[6],
                                      puVar24[7],puVar24[8],puVar24[9],puVar24[10],puVar24[0xb],
                                      puVar24[0xc],puVar24[0xd],puVar24[0xe],puVar24[0xf],
                                      (int)*(undefined8 *)(puVar24 + 0x10),
                                      (int)((ulonglong)*(undefined8 *)(puVar24 + 0x10) >> 0x20),
                                      (undefined4)uStack_14,uStack_14._4_4_,fStack_15,uStack_1,
                                      CONCAT44(fStack_3,uStack_2),(pMVar20->fields)._.ownerActorNr
                                      ,0);
                    }
                  }
                }
              }
              iVar4 = iVar4 + 1;
            } while( true );
          }
        }
      }
    }
  }
  func_?();
  pcVar25 = (code *)swi(3);
  bVar21 = (*pcVar25)();
  return bVar21;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PickupItemFlamethrower+<DoFlaming>d__21::
     PickupItemFlamethrower_DoFlaming_d_21_System_Collections_IEnumerator_Reset
               (PickupItemFlamethrower_DoFlaming_d_21 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__PickupItemFlamethrower___DoFlaming_d__21__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

