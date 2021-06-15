
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PickupItemFlamethrower+<DoFlaming>c__Iterator0::
     PickupItemFlamethrower_DoFlaming_c_Iterator0_MoveNext
               (PickupItemFlamethrower_DoFlaming_c_Iterator0 *this,MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if ((iVar2 != 0) && (iVar2 != 1)) {
    return 0;
  }
  pPVar3 = (this->fields)._this;
  if (pPVar3 != (PickupItemFlamethrower *)0x0) {
    if ((pPVar3->fields).isFlaming == 0) {
      fVar4 = (pPVar3->fields).flamerMinimumBurnTime;
      fVar5 = (pPVar3->fields).flamerStartTime;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      uStack_7 = CONCAT44(fVar6,(undefined4)uStack_7);
      if (fVar4 + fVar5 < fVar6) goto code_?;
    }
    pPVar3 = (this->fields)._this;
    if (pPVar3 != (PickupItemFlamethrower *)0x0) {
      iStack_8 = (pPVar3->fields).currentFuel.currentCryptoKey;
      VStack_9.x = *(float *)&(pPVar3->fields).currentFuel.hiddenValue;
      pBVar10 = (pPVar3->fields).currentFuel.hiddenValueOld;
      fVar4 = (pPVar3->fields).currentFuel.fakeValue;
      VStack_9.y = (float)(pPVar3->fields).currentFuel.hiddenValueOld;
      VStack_9.z = (pPVar3->fields).currentFuel.fakeValue;
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        pBVar10 = (Byte__Array *)VStack_9.y;
        fVar4 = VStack_9.z;
      }
      value.hiddenValue = (ACTkByte4)VStack_9.x;
      value.currentCryptoKey = iStack_8;
      value.hiddenValueOld = pBVar10;
      value.fakeValue = fVar4;
      value.inited = (pPVar3->fields).currentFuel.inited;
      value._17_3_ = *(undefined3 *)&(pPVar3->fields).currentFuel.field_0x11;
      fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
      if (fVar4 <= 0.0) {
        pPVar3 = (this->fields)._this;
        if (pPVar3 == (PickupItemFlamethrower *)0x0) goto code_?;
        cVar11 = (*(code *)(pPVar3->klass->vtable).get_HasUnlimitedAmmo.method)
                           (pPVar3,(pPVar3->klass->vtable).get_CanUnequip.methodPtr);
        if (cVar11 == '\0') {
code_?:
          (this->fields)._PC = -1;
          return 0;
        }
      }
      pPVar3 = (this->fields)._this;
      if ((pPVar3 != (PickupItemFlamethrower *)0x0) &&
         (this_00 = (pPVar3->fields)._.muzzlePoint, this_00 != (Transform *)0x0)) {
        pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_9,this_00,(MethodInfo *)0x0);
        uStack_7._0_4_ = pVVar12->x;
        uStack_7._4_4_ = pVVar12->y;
        fVar4 = pVVar12->z;
        pPVar3 = (this->fields)._this;
        if ((pPVar3 != (PickupItemFlamethrower *)0x0) &&
           (pMVar13 = (pPVar3->fields)._.owner, pMVar13 != (MVPickupOwner *)0x0)) {
          pVVar12 = MVPickupOwner::MVPickupOwner_get_LookDirection
                              (&VStack_9,pMVar13,(MethodInfo *)0x0);
          uVar14._0_4_ = pVVar12->x;
          uVar14._4_4_ = pVVar12->y;
          IStack_15.impulse.z = 0.0;
          IStack_15.interactionType = 0;
          IStack_15.playerKilledByType = 0;
          IStack_15._18_2_ = 0;
          fStack_16 = 0.0;
          IStack_15.damage = 0.0;
          IStack_15.impulse.x = 0.0;
          IStack_15.impulse.y = 0.0;
          func_?(&fStack_16,uStack_7,fVar4,uVar14);
          (this->fields)._lineofFire___1.m_Origin.x = fStack_16;
          (this->fields)._lineofFire___1.m_Origin.y = IStack_15.damage;
          (this->fields)._lineofFire___1.m_Origin.z = IStack_15.impulse.x;
          (this->fields)._lineofFire___1.m_Direction.x = IStack_15.impulse.y;
          *(undefined8 *)&(this->fields)._lineofFire___1.m_Direction.y = IStack_15._12_8_;
          iVar17 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Player,(MethodInfo *)0x0);
          uVar18 = (this->fields)._lineofFire___1.m_Origin.x;
          uVar19 = (this->fields)._lineofFire___1.m_Origin.y;
          uVar20 = (this->fields)._lineofFire___1.m_Origin.z;
          ray.m_Origin.z = (float)uVar20;
          ray.m_Origin.y = (float)uVar19;
          ray.m_Origin.x = (float)uVar18;
          uVar21 = (this->fields)._lineofFire___1.m_Direction.x;
          ray.m_Direction.x = (float)uVar21;
          pPVar3 = (this->fields)._this;
          (this->fields)._layers___1 = 1 << ((byte)iVar17 & 0x1f);
          VStack_9.y = (this->fields)._lineofFire___1.m_Direction.y;
          VStack_9.z = (this->fields)._lineofFire___1.m_Direction.z;
          if (pPVar3 != (PickupItemFlamethrower *)0x0) {
            pMVar13 = (pPVar3->fields)._.owner;
            uStack_7 = CONCAT44((pPVar3->fields).hitRadius,(undefined4)uStack_7);
            fVar4 = (pPVar3->fields).maxRange;
            if (pMVar13 != (MVPickupOwner *)0x0) {
              ignoreWoIds = (HashSet_1_System_Int32_ *)
                            (*(code *)(pMVar13->klass->vtable).get_IgnoreWOIDs.method)
                                      (pMVar13,pMVar13->klass[1]._0.image);
              ray.m_Direction.y = VStack_9.y;
              ray.m_Direction.z = VStack_9.z;
              pLVar22 = CollisionDetection::CollisionDetection_MVSphereCastAll
                                  (ray,uStack_7._4_4_,fVar4,ignoreWoIds,(this->fields)._layers___1,
                                   (MethodInfo *)0x0);
              (this->fields)._hits___1 = pLVar22;
              this = (PickupItemFlamethrower_DoFlaming_c_Iterator0 *)0x0;
              while (pLVar22 != (List_1_VoxelHit_ *)0x0) {
                pOVar23 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                          Json::Serialization::JsonProperty]::
                          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                     pLVar22,
                                     MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__
                                    );
                if ((int)pOVar23 <= (int)this) {
                  this_04 = (WaitForSeconds *)func_?(TypeInfo__UnityEngine__WaitForSeconds)
                  ;
                  UnityEngine.CoreModule.dll::UnityEngine::WaitForSeconds::WaitForSeconds__ctor
                            (this_04,0.2,(MethodInfo *)0x0);
                  (pPVar1->fields)._current = (Object *)this_04;
                  if ((pPVar1->fields)._disposing == 0) {
                    (pPVar1->fields)._PC = 1;
                  }
                  return 1;
                }
                pLVar22 = (pPVar1->fields)._hits___1;
                if (pLVar22 == (List_1_VoxelHit_ *)0x0) break;
                iVar2 = func_?(&stack0xfffffefc,pLVar22,this,
                                         MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                                        );
                wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                               (*(Transform **)(iVar2 + 0x38),(MethodInfo *)0x0);
                if (wo != (MVWorldObjectClient *)0x0) {
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?(TypeInfo__MVGameControllerBase);
                  }
                  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if ((this_01 == (MVNetworkGame *)0x0) ||
                     (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (this_01,(MethodInfo *)0x0),
                     this_02 == (MVLocalPlayer *)0x0)) break;
                  bVar24 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                     ((MVPlayer *)this_02,wo,(MethodInfo *)0x0);
                  if (bVar24 == 0) {
                    x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                  (wo,(MethodInfo *)0x0);
                    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000
                         ) != 0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                      func_?(TypeInfo__UnityEngine__Object);
                    }
                    bVar24 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                       ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                    if (bVar24 != 0) {
                      pPVar3 = (pPVar1->fields)._this;
                      if (pPVar3 == (PickupItemFlamethrower *)0x0) break;
                      uStack_7 = CONCAT44((pPVar3->fields)._.owner,(undefined4)uStack_7);
                      pIVar25 = FlamethrowerHitPackage::FlamethrowerHitPackage_Create
                                          (&IStack_15,(MethodInfo *)0x0);
                      if (x == (InteractionDataHandlerBase *)0x0) break;
                      func_?(7,x,(int)((ulonglong)uStack_7 >> 0x20),pIVar25->damage,
                                      (pIVar25->impulse).x);
                      iVar2 = func_?(wo);
                      if (iVar2 != 0) {
                        pLVar22 = (pPVar1->fields)._hits___1;
                        if (pLVar22 == (List_1_VoxelHit_ *)0x0) break;
                        puVar26 = (undefined4 *)
                                  func_?(&stack0xfffffefc,pLVar22,this,
                                                  MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                                                 );
                        uVar27 = *puVar26;
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
                        IStack_15.impulse.x = (float)puVar26[0xc];
                        IStack_15.impulse.y = (float)puVar26[0xd];
                        IStack_15._12_8_ = *(undefined8 *)(puVar26 + 0xe);
                        uStack_7 = *(undefined8 *)(puVar26 + 0x10);
                        pPVar3 = (pPVar1->fields)._this;
                        fVar4 = (pPVar1->fields)._lineofFire___1.m_Origin.x;
                        fVar5 = (pPVar1->fields)._lineofFire___1.m_Origin.y;
                        fVar6 = (pPVar1->fields)._lineofFire___1.m_Origin.z;
                        fVar39 = (pPVar1->fields)._lineofFire___1.m_Direction.x;
                        VStack_9.y = (pPVar1->fields)._lineofFire___1.m_Direction.y;
                        VStack_9.z = (pPVar1->fields)._lineofFire___1.m_Direction.z;
                        if (((pPVar3 == (PickupItemFlamethrower *)0x0) ||
                            (pMVar13 = (pPVar3->fields)._.owner, pMVar13 == (MVPickupOwner *)0x0)) ||
                           (this_03 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                                      System.dll::System::Collections::Generic::
                                      SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                                      ::Single,System::Object]::
                                      SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                                ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                                  *)pMVar13,(MethodInfo *)0x0),
                           this_03 == (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0)) break;
                        pOVar23 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                                  TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                                  TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                            (this_03,(MethodInfo *)0x0);
                        iVar2 = func_?(wo,TypeInfo__IBulletImpactVisualizer);
                        if (iVar2 == 0) break;
                        uVar27 = func_?(wo,TypeInfo__IBulletImpactVisualizer,uVar27,uVar28,
                                                 uVar29,uVar30,uVar31,uVar32,uVar33,uVar34,uVar35,
                                                 uVar36,uVar37,uVar38,IStack_15.impulse.x,
                                                 IStack_15.impulse.y,IStack_15.impulse.z,
                                                 IStack_15._16_4_,(int)uStack_7,
                                                 (int)((ulonglong)uStack_7 >> 0x20),fVar4,fVar5,
                                                 fVar6,fVar39,VStack_9._4_8_,pOVar23,0);
                        func_?(0,TypeInfo__IBulletImpactVisualizer,uVar27);
                      }
                    }
                  }
                }
                this = (PickupItemFlamethrower_DoFlaming_c_Iterator0 *)((int)&this->klass + 1);
                pLVar22 = (pPVar1->fields)._hits___1;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar40 = (code *)swi(3);
  bVar24 = (*pcVar40)();
  return bVar24;
}


/* Void Reset() */

void Assembly-CSharp.dll::PickupItemFlamethrower+<DoFlaming>c__Iterator0::
     PickupItemFlamethrower_DoFlaming_c_Iterator0_Reset
               (PickupItemFlamethrower_DoFlaming_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

