
/* InteractionData Create(Vector3) */

InteractionData *
Assembly-CSharp.dll::ImpulseHitPackage::ImpulseHitPackage_Create
          (InteractionData *__return_storage_ptr__,Vector3 *impulse,MethodInfo *method)

{
  __return_storage_ptr__->damage = 0.0;
  (__return_storage_ptr__->impulse).x = 0.0;
  (__return_storage_ptr__->impulse).y = 0.0;
  (__return_storage_ptr__->impulse).z = 0.0;
  __return_storage_ptr__->interactionType = 0;
  __return_storage_ptr__->playerKilledByType = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = 0;
  IStack_1.damage = 0.0;
  IStack_1.impulse.x = 0.0;
  IStack_1.impulse.y = 0.0;
  IStack_1.impulse.z = 0.0;
  IStack_1.interactionType = 0;
  IStack_1.playerKilledByType = 0;
  IStack_1._18_2_ = 0;
  VStack_2.x = impulse->x;
  VStack_2.y = impulse->y;
  VStack_2.z = impulse->z;
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
            (&IStack_1,CONCAT31((int3)((ulonglong)impulse >> 8),2),0.0,&VStack_2,
             in_stack_3 & 0xffffff00,(MethodInfo *)0x0);
  __return_storage_ptr__->damage = IStack_1.damage;
  (__return_storage_ptr__->impulse).x = IStack_1.impulse.x;
  (__return_storage_ptr__->impulse).y = IStack_1.impulse.y;
  (__return_storage_ptr__->impulse).z = IStack_1.impulse.z;
  __return_storage_ptr__->interactionType = IStack_1.interactionType;
  __return_storage_ptr__->playerKilledByType = IStack_1.playerKilledByType;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = IStack_1._18_2_;
  return __return_storage_ptr__;
}


/* Void ParseAndHandlePackage(MVWorldObjectClient, MVPlayer, InteractionData) */

void Assembly-CSharp.dll::ImpulseHitPackage::ImpulseHitPackage_ParseAndHandlePackage
               (ImpulseHitPackage *this,MVWorldObjectClient *worldObjectClient,MVPlayer *shooter,
               InteractionData *interactionStruct,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  float_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<int,_float>_System__Collections__Generic__IReadOnlyDictionary<int,_float>__int__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_float>__set_Item_int__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__InteractionData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  float_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<int,_float>_System__Collections__Generic__IReadOnlyDictionary<int,_float>__int__float_
  ;
  if (((shooter != (MVPlayer *)0x0) &&
      (pSVar2 = (shooter->fields).spawnRolesManager, pSVar2 != (SpawnRolesManager *)0x0)) &&
     (pSVar3 = (pSVar2->fields).spawnRolesRuntimeData, pSVar3 != (SpawnRolesRuntimeData *)0x0)) {
    key = (pSVar3->fields).activeSpawnRole;
    pDVar4 = (this->fields).lastShotTime;
    if ((
        float_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<int,_float>_System__Collections__Generic__IReadOnlyDictionary<int,_float>__int__float_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   float_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<int,_float>_System__Collections__Generic__IReadOnlyDictionary<int,_float>__int__float_
                   );
    }
    afStackX_18[0] = 0.0;
    if (pDVar4 == (Dictionary_2_System_Int32_System_Single_ *)0x0) {
      uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
      this_00 = (ArgumentNullException *)func_?(uVar5);
      paramName = (String *)func_?(&StringLiteral_dictionary);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (this_00,paramName,(MethodInfo *)0x0);
      FUN_?(this_00,pMVar1);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pIVar7 = ((pMVar1->field7_0x38).rgctx_data)->rgctxDataDummy;
    if ((pIVar7->field_0x135 & 1) == 0) {
      pIVar7 = (Il2CppClass *)FUN_?(pIVar7);
    }
    pDVar8 = pDVar4->klass;
    uVar9 = 0;
    uVar10._0_1_ = (pDVar8->_1).rank;
    uVar10._1_1_ = (pDVar8->_1).minimumAlignment;
    if (uVar10 != 0) {
      do {
        if (pDVar8->interfaceOffsets[uVar9].interfaceType == pIVar7) {
          pVVar11 = &(pDVar8->vtable).Equals + (pDVar8->interfaceOffsets[uVar9].offset + 1);
          goto code_?;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar10);
    }
    pVVar11 = (VirtualInvokeData *)FUN_?(pDVar4,pIVar7,1);
code_?:
    cVar12 = (*pVVar11->methodPtr)(pDVar4,(ulonglong)key,afStackX_18,pVVar11->method);
    fVar13 = 0.0;
    if (cVar12 != '\0') {
      fVar13 = afStackX_18[0];
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar6;
    fVar14 = (float)(*pcRam_?)();
    if (_UNK_? < fVar14 - fVar13) {
      if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_15.x = (interactionStruct->impulse).x;
      VStack_15.y = (interactionStruct->impulse).y;
      VStack_15.z = (interactionStruct->impulse).z;
      puVar16 = (undefined8 *)FUN_?(auStack_17,&VStack_15,_UNK_?);
      impulse = &VStack_15;
      VStack_15._0_8_ = *puVar16;
      VStack_15.z = *(float *)(puVar16 + 1);
      InteractionPackage::InteractionPackage_HandlePackage_3
                ((InteractionPackage *)this,worldObjectClient,shooter,impulse,
                 AvatarModifierPackageType__Enum_NoFriction,(MethodInfo *)0x0);
      pDVar4 = (this->fields).lastShotTime;
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      fVar13 = (float)(*pcRam_?)();
      if (pDVar4 == (Dictionary_2_System_Int32_System_Single_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
      Dictionary_2_System_Int32_System_Single__TryInsert
                (pDVar4,key,fVar13,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)impulse >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_float>__set_Item_int__float_
                 ->klass->rgctx_data[0x22].method);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* ImpulseHitPackage() */

void Assembly-CSharp.dll::ImpulseHitPackage::ImpulseHitPackage__ctor
               (ImpulseHitPackage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_float>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_System_Single_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_float>);
  FUN_?(pDVar1);
  bVar2 = iRam_? != 0;
  (this->fields).lastShotTime = pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}

