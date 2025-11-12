
/* Void Update() */

void Assembly-CSharp.dll::AdvancedGhostEyeWeapon::AdvancedGhostEyeWeapon_Update
               (AdvancedGhostEyeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).timeoutMap;
  if (pTVar1 != (TimeoutMap *)0x0) {
    TimeoutMap::TimeoutMap_Update(pTVar1,(MethodInfo *)0x0);
    pHStack_2 = (this->fields)._.attackTargets;
    if (pHStack_2 != (HashSet_1_System_Int32_ *)0x0) {
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
        uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      ppHStack_9 = (HashSet_1_System_Int32_ **)
                    ((ulonglong)(uint)(pHStack_2->fields)._version << 0x20);
      uStack_10 = 0;
      lStack_11 = (longlong)ppHStack_9;
      uStack_12 = 0;
      uStack_4 = 0;
      ppHStack_9 = &pHStack_2;
code_?:
      cVar13 = FUN_?(&pHStack_2,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                            );
      if (cVar13 == '\0') {
        return;
      }
      key = (int32_t)uStack_12;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar14 == (MVGameControllerBase *)0x0) goto code_?;
      pMVar15 = (pMVar14->fields).game;
      if (pMVar15 != (MVNetworkGame *)0x0) {
        if (((pMVar15->fields).worldNetwork != (WorldNetwork *)0x0) &&
           (pMVar16 = (((pMVar15->fields).worldNetwork)->fields)._.worldObjectClientManager,
           pMVar16 != (MVWorldObjectClientManagerNetwork *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOStackX_8 = (Object *)0x0;
          this_00 = (pMVar16->fields)._.worldObjects;
          if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
          goto code_?;
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
code_?:
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__TryGetValue
            ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,&pOStackX_8,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
            );
  pOVar18 = pOStackX_8;
  if (pOStackX_8 != (Object *)0x0) {
    pTVar1 = (this->fields).timeoutMap;
    if (pTVar1 != (TimeoutMap *)0x0) {
      bVar19 = TimeoutMap::TimeoutMap_Contains
                         (pTVar1,*(int32_t *)&pOStackX_8[1].klass,(MethodInfo *)0x0);
      if (bVar19 != 0) goto code_?;
      if ((GameObject *)pOVar18[0xc].monitor != (GameObject *)0x0) {
        this_02 = (MVRigidBody *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                            ((GameObject *)pOVar18[0xc].monitor,
                             MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                            );
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar20 = pOVar18;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
          pOVar20 = pOStackX_8;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
          pOVar20 = pOStackX_8;
        }
        if (this_02 == (MVRigidBody *)0x0) goto code_?;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_02->fields)._._._._._.m_CachedPtr == (void *)0x0) goto code_?;
        puVar21 = (undefined8 *)(*(code *)pOVar20->klass[4]._0.typeMetadataHandle)(auStack_22);
        uStack_23 = *puVar21;
        fVar24 = *(float *)(puVar21 + 1);
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_03 != (GameObject *)0x0) {
          this_04 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_03,(MethodInfo *)0x0);
          if (this_04 != (Transform *)0x0) {
            method_00 = (MethodInfo *)0x0;
            pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_26,this_04,(MethodInfo *)0x0);
            uStack_27._0_4_ = pVVar25->x;
            uStack_27._4_4_ = pVVar25->y;
            fVar28 = pVVar25->z;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar29 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar30 = (pVVar29->upVector).x;
            uVar31 = (pVVar29->upVector).y;
            VStack_32.z = fVar24 - (fVar28 - (pVVar29->upVector).z);
            VStack_32.x = (float)uStack_23 - ((float)uStack_27 - (float)uVar30);
            VStack_32.y = uStack_23._4_4_ - (uStack_27._4_4_ - (float)uVar31);
            pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                (aVStack_33,&VStack_32,method_00);
            fVar24 = (this->fields).impulseStrength;
            uVar34 = pVVar25->x;
            uVar35 = pVVar25->y;
            VStack_36.z = pVVar25->z * fVar24;
            VStack_36.x = (float)uVar34 * fVar24;
            VStack_36.y = (float)uVar35 * fVar24;
            MVRigidBody::MVRigidBody_AddImpulse_1(this_02,&VStack_36,0,(MethodInfo *)0x0);
            pTVar1 = (this->fields).timeoutMap;
            if (pTVar1 != (TimeoutMap *)0x0) {
              TimeoutMap::TimeoutMap_Add(pTVar1,*(int32_t *)&pOVar18[1].klass,(MethodInfo *)0x0);
              this_01 = (this->fields).doDamage;
              if (this_01 != (AudioSource *)0x0) {
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                          (this_01,(MethodInfo *)0x0);
                goto code_?;
              }
              FUN_?();
            }
            FUN_?();
          }
          FUN_?();
        }
        FUN_?();
      }
      FUN_?();
    }
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  goto code_?;
}


/* AdvancedGhostEyeWeapon() */

void Assembly-CSharp.dll::AdvancedGhostEyeWeapon::AdvancedGhostEyeWeapon__ctor
               (AdvancedGhostEyeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TimeoutMap);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).impulseStrength = 2000.0;
  this_00 = (TimeoutMap *)FUN_?(TypeInfo__TimeoutMap);
  TimeoutMap::TimeoutMap__ctor(this_00,_UNK_?,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).timeoutMap = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).timeoutMap >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar6 = (HashSet_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar6,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  bVar1 = iRam_? != 0;
  (this->fields)._.attackTargets = pHVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.attackTargets >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
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
  return;
}

