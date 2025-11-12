
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PickupItemFlamethrower+<DoFlaming>d__21::
     PickupItemFlamethrower_DoFlaming_d_21_MoveNext
               (PickupItemFlamethrower_DoFlaming_d_21 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IBulletImpactVisualizer);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__WaitForSeconds);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if ((iVar1 == 0) || (iVar1 == 1)) {
    (this->fields).__1__state = -1;
    if (this_00 == (PickupItemFlamethrower *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    bVar3 = PickupItemFlamethrower::PickupItemFlamethrower_IsStillFlaming(this_00,(MethodInfo *)0x0)
    ;
    if (bVar3 != 0) {
      uVar4._0_4_ = (this_00->fields).currentFuel.currentCryptoKey;
      uVar4._4_4_ = (this_00->fields).currentFuel.hiddenValue;
      pBVar5 = (this_00->fields).currentFuel.hiddenValueOld;
      uVar6 = *(undefined8 *)&(this_00->fields).currentFuel.fakeValue;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      auStack_7 = (undefined1  [8])uVar4;
      uStack_8 = pBVar5;
      uStack_9 = uVar6;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      fVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_InternalDecrypt((ObscuredFloat *)auStack_7,(MethodInfo *)0x0);
      if ((0.0 < fVar10) ||
         (cVar11 = (*(this_00->klass->vtable).get_HasUnlimitedAmmo.methodPtr)(this_00), cVar11 != '\0'
         )) {
        obj = (this_00->fields)._.muzzlePoint;
        if (obj != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          auStack_12._0_4_ = 0;
          auStack_12[4] = 0;
          auStack_12[5] = 0;
          auStack_12[6] = 0;
          auStack_12[7] = 0;
          fStack_13 = 0.0;
          pvVar14 = (obj->fields)._._.m_CachedPtr;
          if (pvVar14 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            bVar3 = (*pcVar2)();
            return bVar3;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar2 = (code *)swi(3);
            bVar3 = (*pcVar2)();
            return bVar3;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(pvVar14,auStack_12);
          pMVar15 = (this_00->fields)._.owner;
          if (pMVar15 != (MVPickupOwner *)0x0) {
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                                ((Vector3 *)&IStack_17,&(pMVar15->fields).lookDirection,in_R8);
            auStack_7 = auStack_12;
            auStack_12._0_4_ = pVVar16->x;
            auStack_12._4_4_ = pVVar16->y;
            fVar10 = pVVar16->z;
            uStack_8 = (Byte__Array *)CONCAT44(uStack_8._4_4_,fStack_13);
            fStack_13 = fVar10;
            IStack_18._0_8_ = auStack_12;
            fVar19 = (float)FUN_?(auStack_12);
            if (_UNK_? < fVar19) {
              fVar20 = IStack_18.damage / fVar19;
              AVar21 = (ACTkByte4)(IStack_18.impulse.x / fVar19);
              fVar10 = fVar10 / fVar19;
            }
            else {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
              fVar20 = (pVVar22->zeroVector).x;
              AVar21 = (ACTkByte4)(pVVar22->zeroVector).y;
              fVar10 = (pVVar22->zeroVector).z;
            }
            auStack_12._4_4_ = AVar21;
            auStack_12._0_4_ = fVar20;
            uStack_8 = (Byte__Array *)CONCAT44(fVar20,(float)uStack_8);
            iVar23 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                               (StringLiteral_Player,(MethodInfo *)0x0);
            fVar19 = (this_00->fields).hitRadius;
            fVar20 = (this_00->fields).maxRange;
            pMVar15 = (this_00->fields)._.owner;
            if (pMVar15 != (MVPickupOwner *)0x0) {
              ignoreWoIds = (HashSet_1_System_Int32_ *)
                            (*(pMVar15->klass->vtable).get_IgnoreWOIDs.methodPtr)
                                      (pMVar15,(pMVar15->klass->vtable).get_IgnoreWOIDs.method);
              pBVar5 = uStack_8;
              auVar24 = auStack_7;
              iVar1 = 0;
              uVar4 = 0;
              uVar6._4_4_ = fVar10;
              uVar6._0_4_ = (float)auStack_12._4_4_;
              uStack_9._4_4_ = fVar10;
              uStack_9._0_4_ = (float)auStack_12._4_4_;
              pLVar25 = CollisionDetection::CollisionDetection_MVSphereCastAll
                                  ((Ray *)auStack_7,fVar19,fVar20,ignoreWoIds,
                                   1 << ((byte)iVar23 & 0x1f),(MethodInfo *)0x0);
              if (pLVar25 != (List_1_VoxelHit_ *)0x0) {
                do {
                  if ((pLVar25->fields)._size <= iVar1) {
                    pOVar26 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
                    *(undefined4 *)&pOVar26[1].klass = 0x3e4ccccd;
                    (this->fields).__2__current = pOVar26;
                    func_?(&(this->fields).__2__current);
                    (this->fields).__1__state = 1;
                    return 1;
                  }
                  puVar27 = (undefined8 *)FUN_?(auStack_28);
                  uStack_29 = *puVar27;
                  uStack_30 = puVar27[1];
                  uStack_31 = puVar27[2];
                  uStack_32 = puVar27[3];
                  uStack_33 = puVar27[4];
                  uStack_34 = puVar27[5];
                  uStack_35 = puVar27[6];
                  uStack_36 = puVar27[7];
                  uStack_37 = puVar27[10];
                  pMVar38 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                                      ((Transform *)puVar27[9],(MethodInfo *)0x0);
                  if (pMVar38 != (MVWorldObjectClient *)0x0) {
                    pMVar39 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if (((pMVar39 == (MVNetworkGame *)0x0) ||
                        (this_01 = (pMVar39->fields).playerContainer,
                        this_01 == (MVPlayerContainer *)0x0)) ||
                       (this_02 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                            (this_01,(MethodInfo *)0x0),
                       this_02 == (MVLocalPlayer *)0x0)) break;
                    bVar3 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                      ((MVPlayer *)this_02,pMVar38,(MethodInfo *)0x0);
                    if (bVar3 == 0) {
                      uVar40 = 0;
                      pIVar41 = MVWorldObjectClient::
                                MVWorldObjectClient_get_InteractionDataHandlerBase
                                          (pMVar38,(MethodInfo *)0x0);
                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Object);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Object);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (pIVar41 != (InteractionDataHandlerBase *)0x0) {
                        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        if ((pIVar41->fields)._._._._._.m_CachedPtr != (void *)0x0) {
                          pMVar15 = (this_00->fields)._.owner;
                          IStack_17.interactionType = 0;
                          IStack_17.playerKilledByType = 0;
                          IStack_17._18_2_ = 0;
                          IStack_17.damage = 0.0;
                          IStack_17.impulse.x = 0.0;
                          IStack_17.impulse.y = 0.0;
                          IStack_17.impulse.z = 0.0;
                          MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor
                                    (&IStack_17,
                                     (InteractionPackageType__Enum)
                                     CONCAT71((int7)((ulonglong)uVar40 >> 8),8),(MethodInfo *)0x0);
                          IStack_18.interactionType = IStack_17.interactionType;
                          IStack_18.playerKilledByType = IStack_17.playerKilledByType;
                          IStack_18._18_2_ = IStack_17._18_2_;
                          IStack_18.damage = IStack_17.damage;
                          IStack_18.impulse.x = IStack_17.impulse.x;
                          IStack_18.impulse.y = IStack_17.impulse.y;
                          IStack_18.impulse.z = IStack_17.impulse.z;
                          (*(pIVar41->klass->vtable).__unknown_1.methodPtr)
                                    (pIVar41,pMVar15,&IStack_18,0,
                                     (pIVar41->klass->vtable).__unknown_1.method);
                          lVar42 = FUN_?(pMVar38,TypeInfo__IBulletImpactVisualizer);
                          uVar43 = (undefined4)((ulonglong)uVar4 >> 0x20);
                          if (lVar42 != 0) {
                            puVar27 = (undefined8 *)FUN_?(auStack_28,pLVar25,iVar1);
                            pMVar15 = (this_00->fields)._.owner;
                            if ((pMVar15 == (MVPickupOwner *)0x0) ||
                               (pMVar38 = (pMVar15->fields)._.worldObjectParent,
                               pMVar38 == (MVWorldObjectClient *)0x0)) break;
                            uStack_29 = *puVar27;
                            uStack_30 = puVar27[1];
                            uStack_31 = puVar27[2];
                            uStack_32 = puVar27[3];
                            uStack_33 = puVar27[4];
                            uStack_34 = puVar27[5];
                            uStack_35 = puVar27[6];
                            uStack_36 = puVar27[7];
                            uStack_44 = *(undefined4 *)(puVar27 + 8);
                            uStack_45 = *(undefined4 *)((longlong)puVar27 + 0x44);
                            uStack_46 = *(undefined4 *)(puVar27 + 9);
                            uStack_47 = *(undefined4 *)((longlong)puVar27 + 0x4c);
                            uStack_37 = puVar27[10];
                            uVar4 = CONCAT44(uVar43,(pMVar38->fields)._.ownerActorNr);
                            auStack_7 = auVar24;
                            uStack_8 = pBVar5;
                            uStack_9 = uVar6;
                            FUN_?(pMVar15,TypeInfo__IBulletImpactVisualizer,lVar42,
                                          &uStack_29,auStack_7,uVar4,0);
                          }
                        }
                      }
                    }
                  }
                  iVar1 = iVar1 + 1;
                } while( true );
              }
            }
          }
        }
        goto code_?;
      }
    }
  }
  return 0;
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
  uVar1 = func_?(&
                              MethodInfo__PickupItemFlamethrower___DoFlaming_d__21__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

