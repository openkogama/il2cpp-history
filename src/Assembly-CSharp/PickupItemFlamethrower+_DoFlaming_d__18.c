
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PickupItemFlamethrower+<DoFlaming>d__18::
     PickupItemFlamethrower_DoFlaming_d_18_MoveNext
               (PickupItemFlamethrower_DoFlaming_d_18 *this,MethodInfo *method)

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
  pIVar6 = (IBulletImpactVisualizer__Class *)this;
  if (pPVar5 != (PickupItemFlamethrower *)0x0) {
    if ((pPVar5->fields).isFlaming == 0) {
      pLStack_7 = (List_1_VoxelHit_ *)
                  ((pPVar5->fields).flamerMinimumBurnTime + (pPVar5->fields).flamerStartTime);
      fStack_8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if ((float)pLStack_7 < fStack_8) {
        return 0;
      }
    }
    iStack_9 = (pPVar5->fields).currentFuel.currentCryptoKey;
    VStack_10.x = *(float *)&(pPVar5->fields).currentFuel.hiddenValue;
    VStack_10.y = (float)(pPVar5->fields).currentFuel.hiddenValueOld;
    VStack_10.z = (pPVar5->fields).currentFuel.fakeValue;
    unaff_ESI = *(MVWorldObjectClient **)&(pPVar5->fields).currentFuel.inited;
    pBVar11 = (pPVar5->fields).currentFuel.hiddenValueOld;
    fVar12 = (pPVar5->fields).currentFuel.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      pBVar11 = (Byte__Array *)VStack_10.y;
      fVar12 = VStack_10.z;
    }
    value.hiddenValue = (ACTkByte4)VStack_10.x;
    value.currentCryptoKey = iStack_9;
    value.hiddenValueOld = pBVar11;
    value.fakeValue = fVar12;
    value._16_4_ = unaff_ESI;
    pLStack_7 = (List_1_VoxelHit_ *)
                Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    if (((float)pLStack_7 <= 0.0) &&
       (cVar13 = (*(code *)(pPVar5->klass->vtable).get_HasUnlimitedAmmo.method)
                           (pPVar5,(pPVar5->klass->vtable).get_CanUnequip.methodPtr), cVar13 == '\0'
       )) {
      return 0;
    }
    this_00 = (pPVar5->fields)._.muzzlePoint;
    if (this_00 != (Transform *)0x0) {
      pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_10,this_00,(MethodInfo *)0x0);
      uStack_15._0_4_ = pVVar14->x;
      uStack_15._4_4_ = pVVar14->y;
      unaff_ESI = (MVWorldObjectClient *)pVVar14->z;
      pMVar16 = (pPVar5->fields)._.owner;
      if (pMVar16 != (MVPickupOwner *)0x0) {
        pVVar14 = MVPickupOwner::MVPickupOwner_get_LookDirection
                            (&VStack_10,pMVar16,(MethodInfo *)0x0);
        uStack_17 = uStack_15;
        pMStack_18 = unaff_ESI;
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            (&VStack_10,*pVVar14,(MethodInfo *)0x0);
        uVar19 = pVVar14->x;
        uVar20 = pVVar14->y;
        fStack_3 = pVVar14->z;
        uStack_1 = uVar19;
        uStack_2 = uVar20;
        iVar21 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_Player,(MethodInfo *)0x0);
        fStack_8 = (pPVar5->fields).hitRadius;
        pMVar16 = (pPVar5->fields)._.owner;
        pLStack_7 = (List_1_VoxelHit_ *)(pPVar5->fields).maxRange;
        unaff_ESI = (MVWorldObjectClient *)(1 << ((byte)iVar21 & 0x1f));
        if (pMVar16 != (MVPickupOwner *)0x0) {
          ignoreWoIds = (HashSet_1_System_Int32_ *)
                        (*(code *)(pMVar16->klass->vtable).get_IgnoreWOIDs.method)();
          ray.m_Origin.z = (float)pMStack_18;
          ray.m_Origin.x = (float)(undefined4)uStack_17;
          ray.m_Origin.y = (float)uStack_17._4_4_;
          ray.m_Direction.x = (float)uStack_1;
          ray.m_Direction.y = (float)uStack_2;
          ray.m_Direction.z = fStack_3;
          pLStack_7 = CollisionDetection::CollisionDetection_MVSphereCastAll
                                (ray,fStack_8,(float)pLStack_7,ignoreWoIds,(int32_t)unaff_ESI,
                                 (MethodInfo *)0x0);
          fStack_8 = 0.0;
          x = (IBulletImpactVisualizer__Class *)this;
          if (pLStack_7 != (List_1_VoxelHit_ *)0x0) {
            do {
              if ((pLStack_7->fields)._size <= (int)fStack_8) {
                this_03 = (SubscribableVariable_1_System_Single_ *)func_?();
                SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                          (this_03,0.2,(MethodInfo *)0x0);
                (this->fields).__2__current = (Object *)this_03;
                func_?(&(this->fields).__2__current,this_03);
                (this->fields).__1__state = 1;
                return 1;
              }
              iVar4 = func_?(&stack0xfffffef0,pLStack_7,fStack_8);
              unaff_ESI = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                                    (*(Transform **)(iVar4 + 0x38),(MethodInfo *)0x0);
              if (unaff_ESI != (MVWorldObjectClient *)0x0) {
                this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                pIVar6 = x;
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
                    uStack_15 = CONCAT44((pPVar5->fields)._.owner,(undefined4)uStack_15);
                    pIVar23 = FlamethrowerHitPackage::FlamethrowerHitPackage_Create
                                        (&IStack_24,(MethodInfo *)0x0);
                    pIVar6 = x;
                    if (x == (IBulletImpactVisualizer__Class *)0x0) break;
                    uVar25._0_1_ = pIVar23->interactionType;
                    uVar25._1_1_ = pIVar23->playerKilledByType;
                    uVar25._2_2_ = *(undefined2 *)&pIVar23->field_0x12;
                    func_?(7,x,uStack_15._4_4_,pIVar23->damage,(pIVar23->impulse).x,
                                    (pIVar23->impulse).y,(pIVar23->impulse).z,uVar25,0);
                    iVar4 = func_?(unaff_ESI,TypeInfo__IBulletImpactVisualizer);
                    if (iVar4 != 0) {
                      puVar26 = (undefined4 *)
                                func_?(&stack0xfffffef0,pLStack_7,fStack_8,
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
                      VStack_10._4_8_ = *(undefined8 *)(puVar26 + 0x10);
                      pMVar16 = (pPVar5->fields)._.owner;
                      if ((pMVar16 == (MVPickupOwner *)0x0) ||
                         (pMVar39 = (pMVar16->fields)._.worldObjectParent,
                         pMVar39 == (MVWorldObjectClient *)0x0)) break;
                      uStack_15 = CONCAT44((pMVar39->fields)._.ownerActorNr,(undefined4)uStack_15);
                      iVar4 = func_?(unaff_ESI,TypeInfo__IBulletImpactVisualizer);
                      x = TypeInfo__IBulletImpactVisualizer;
                      pIVar6 = pIVar27;
                      if ((iVar4 == 0) ||
                         (iVar4 = func_?(unaff_ESI,TypeInfo__IBulletImpactVisualizer),
                         pIVar6 = x, iVar4 == 0)) goto code_?;
                      func_?(0,TypeInfo__IBulletImpactVisualizer,iVar4,uVar25,uVar28,uVar29,
                                      uVar30,uVar31,uVar32,uVar33,uVar34,uVar35,uVar36,uVar37,uVar38
                                      ,IStack_24.impulse.x,IStack_24.impulse.y,IStack_24.impulse.z,
                                      IStack_24._16_4_,VStack_10.y,VStack_10.z,(undefined4)uStack_17
                                      ,uStack_17._4_4_,pMStack_18,uStack_1,
                                      CONCAT44(fStack_3,uStack_2),uStack_15._4_4_,0);
                    }
                  }
                }
              }
              fStack_8 = (float)((int)fStack_8 + 1);
            } while( true );
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?(unaff_ESI,pIVar6);
  pcVar40 = (code *)swi(3);
  bVar22 = (*pcVar40)();
  return bVar22;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PickupItemFlamethrower+<DoFlaming>d__18::
     PickupItemFlamethrower_DoFlaming_d_18_System_Collections_IEnumerator_Reset
               (PickupItemFlamethrower_DoFlaming_d_18 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__PickupItemFlamethrower___DoFlaming_d__18__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

