
/* InteractionData GetSharedData(InteractionPackageType) */

InteractionData *
MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_GetSharedData
          (InteractionData *__return_storage_ptr__,InteractionPackageType__Enum interactionType,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__ContainsKey_MV__WorldObject__InteractionPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__get_Item_MV__WorldObject__InteractionPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__InteractionData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__InteractionData);
  }
  pDVar1 = TypeInfo__MV__WorldObject__InteractionData->static_fields->sharedStaticValues;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_
                 *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
            WorldObject::InteractionData]::
            Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__FindEntry
                      ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)pDVar1,
                       interactionType & 0xff,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__ContainsKey_MV__WorldObject__InteractionPackageType_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      uVar3 = 0;
      __return_storage_ptr__->damage = 0.0;
      (__return_storage_ptr__->impulse).x = 0.0;
      (__return_storage_ptr__->impulse).y = 0.0;
      (__return_storage_ptr__->impulse).z = 0.0;
code_?:
      __return_storage_ptr__->interactionType = (char)uVar3;
      __return_storage_ptr__->playerKilledByType = (char)((uint)uVar3 >> 8);
      *(short *)&__return_storage_ptr__->field_0x12 = (short)((uint)uVar3 >> 0x10);
      return __return_storage_ptr__;
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__WorldObject__InteractionData);
    }
    pMVar4 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__get_Item_MV__WorldObject__InteractionPackageType_
    ;
    pDVar1 = TypeInfo__MV__WorldObject__InteractionData->static_fields->sharedStaticValues;
    if (pDVar1 != (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_
                   *)0x0) {
      uVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
               WorldObject::InteractionData]::
               Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__FindEntry
                         ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)pDVar1,
                          interactionType & 0xff,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__get_Item_MV__WorldObject__InteractionPackageType_
                          ->klass->rgctx_data[0x21].method);
      if ((int)uVar5 < 0) {
        uVar6 = func_?(pMVar4->klass->rgctx_data,0xe);
        key = (Object *)func_?(uVar6);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (key,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        pIVar8 = (InteractionData *)(*pcVar7)();
        return pIVar8;
      }
      pDVar9 = (Dictionary_2_TKey_TValue_Entry_System_ByteEnum_MV_WorldObject_InteractionData___Array
                *)(pDVar1->fields)._entries;
      if (pDVar9 != (Dictionary_2_TKey_TValue_Entry_System_ByteEnum_MV_WorldObject_InteractionData___Array
                     *)0x0) {
        if ((uint)pDVar9->max_length <= uVar5) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          pIVar8 = (InteractionData *)(*pcVar7)();
          return pIVar8;
        }
        pIVar8 = &pDVar9->vector[(int)uVar5].value;
        fVar10 = (pIVar8->impulse).x;
        fVar11 = (pIVar8->impulse).y;
        fVar12 = (pIVar8->impulse).z;
        pDVar13 = pDVar9->vector + (int)uVar5;
        uVar3._0_1_ = (pDVar13->value).interactionType;
        uVar3._1_1_ = (pDVar13->value).playerKilledByType;
        uVar3._2_2_ = *(undefined2 *)&(pDVar13->value).field_0x12;
        __return_storage_ptr__->damage = pIVar8->damage;
        (__return_storage_ptr__->impulse).x = fVar10;
        (__return_storage_ptr__->impulse).y = fVar11;
        (__return_storage_ptr__->impulse).z = fVar12;
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pIVar8 = (InteractionData *)(*pcVar7)();
  return pIVar8;
}


/* Byte[] ToByteArray() */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_ToByteArray
          (InteractionData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__InteractionData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
  BytePacker::BytePacker__ctor(this_00,(MethodInfo *)0x0);
  bVar1 = this->interactionType;
  if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar2 = InteractionData_GetSharedData(aIStack_3,(uint)bVar1,(MethodInfo *)0x0);
  uVar4 = pIVar2->playerKilledByType;
  fVar5 = pIVar2->damage;
  fVar6 = (pIVar2->impulse).x;
  fVar7 = (pIVar2->impulse).y;
  fVar8 = (pIVar2->impulse).z;
  if (this_00 != (BytePacker *)0x0) {
    BytePacker::BytePacker_Write(this_00,0,(MethodInfo *)0x0);
    uVar9 = this->interactionType != 0;
    if ((bool)uVar9) {
      BytePacker::BytePacker_Write(this_00,this->interactionType,(MethodInfo *)0x0);
    }
    if ((this->damage != 0.0) && (fVar5 == 0.0)) {
      BytePacker::BytePacker_Write_7(this_00,this->damage,(MethodInfo *)0x0);
      uVar9 = uVar9 | 2;
    }
    fVar5 = (this->impulse).y;
    fVar10 = (this->impulse).x;
    fVar11 = (this->impulse).z;
    if ((_UNK_? < fVar5 * fVar5 + fVar10 * fVar10 + fVar11 * fVar11) &&
       (fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8 <= _UNK_?)) {
      BytePacker::BytePacker_Write_7(this_00,(this->impulse).x,(MethodInfo *)0x0);
      BytePacker::BytePacker_Write_7(this_00,(this->impulse).y,(MethodInfo *)0x0);
      BytePacker::BytePacker_Write_7(this_00,(this->impulse).z,(MethodInfo *)0x0);
      uVar9 = uVar9 | 4;
    }
    if ((this->playerKilledByType != 0) && (uVar4 == '\0')) {
      BytePacker::BytePacker_Write(this_00,this->playerKilledByType,(MethodInfo *)0x0);
      uVar9 = uVar9 | 8;
    }
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar12 = (this_00->fields)._buffer;
    if ((pLVar12 != (List_1_System_Byte_ *)0x0) &&
       (pBVar13 = (Byte__Array *)
                  FUN_?(pLVar12,
                                MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                               ), pBVar13 != (Byte__Array *)0x0)) {
      if ((int)pBVar13->max_length == 0) {
        FUN_?();
        pcVar14 = (code *)swi(3);
        pBVar13 = (Byte__Array *)(*pcVar14)();
        return pBVar13;
      }
      pBVar13->vector[0] = uVar9;
      return pBVar13;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  pBVar13 = (Byte__Array *)(*pcVar14)();
  return pBVar13;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_ToString
                   (InteractionData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__InteractionPackageType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__PlayerKilledByType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_damage___0___AvatarPackageType__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,4);
  afStackX_8[0] = this->damage;
  lVar1 = FUN_?(uRam_?,afStackX_8);
  if (args != (Object__Array *)0x0) {
    if (lVar1 != 0) {
      lVar2 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,0,lVar1);
    afStackX_8[0] = (float)CONCAT31(afStackX_8[0]._1_3_,this->interactionType);
    lVar1 = FUN_?(TypeInfo__MV__WorldObject__InteractionPackageType,afStackX_8);
    if (lVar1 != 0) {
      lVar2 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,1,lVar1);
    uStack_6._0_4_ = (this->impulse).x;
    uStack_6._4_4_ = (this->impulse).y;
    fStack_7 = (this->impulse).z;
    lVar1 = FUN_?(TypeInfo__UnityEngine__Vector3,&uStack_6);
    if (lVar1 != 0) {
      lVar2 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,2,lVar1);
    afStackX_8[0] = (float)CONCAT31(afStackX_8[0]._1_3_,this->playerKilledByType);
    lVar1 = FUN_?(TypeInfo__MV__Common__PlayerKilledByType,afStackX_8);
    if (lVar1 != 0) {
      lVar1 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar1 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,3);
    pSVar5 = StringLiteral_damage___0___AvatarPackageType__;
    PStack_8._arg0 = (Object *)0x0;
    PStack_8._arg1 = (Object *)0x0;
    PStack_8._arg2 = (Object *)0x0;
    PStack_8._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_8,args,(MethodInfo *)0x0);
    PStack_9._arg0 = PStack_8._arg0;
    PStack_9._arg1 = PStack_8._arg1;
    PStack_9._arg2 = PStack_8._arg2;
    PStack_9._args = PStack_8._args;
    pSVar5 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar5,&PStack_9,(MethodInfo *)0x0);
    return pSVar5;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* Void Validate(InteractionData, InteractionPackageType, Single, Vector3, PlayerKilledByType) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_Validate
               (InteractionData *sharedInteractionData,InteractionPackageType__Enum interactionType,
               float damage,Vector3 *impulse,PlayerKilledByType__Enum playerKilledByType,
               MethodInfo *method)

{
  if ((damage != 0.0) &&
     (uStack_1._0_1_ = sharedInteractionData->interactionType,
     uStack_1._1_1_ = sharedInteractionData->playerKilledByType,
     uStack_1._2_2_ = *(undefined2 *)&sharedInteractionData->field_0x12,
     sharedInteractionData->damage != 0.0)) {
    func_?(&TypeInfo__MV__WorldObject__InteractionPackageType);
    func_?(auStack_2);
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)auStack_2,(MethodInfo *)0x0);
    pSVar4 = (String *)func_?(&StringLiteral_Both_sharedValues_damage_and_con);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar4,pSVar3,(MethodInfo *)0x0);
    uVar5 = func_?(&TypeInfo__System__Exception);
    pEVar6 = (Exception *)func_?(uVar5);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar6,pSVar3,(MethodInfo *)0x0);
    uVar5 = func_?(&
                                MethodInfo__MV__WorldObject__InteractionData__Validate_MethodInfo__MV__WorldObject__InteractionData__MV__WorldObject__InteractionPackageType__float__UnityEngine__Vector3__MV__Common__PlayerKilledByType_
                               );
    FUN_?(pEVar6,uVar5);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((_UNK_? < impulse->x * impulse->x + impulse->y * impulse->y + impulse->z * impulse->z)
     && (fVar8 = (sharedInteractionData->impulse).y, fVar9 = (sharedInteractionData->impulse).x,
        fVar10 = (sharedInteractionData->impulse).z,
        _UNK_? < fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10)) {
    func_?(&TypeInfo__MV__WorldObject__InteractionPackageType);
    func_?(auStack_2);
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)auStack_2,(MethodInfo *)0x0);
    pSVar4 = (String *)func_?(&StringLiteral_Both_sharedValues_impulse_and_co);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar4,pSVar3,(MethodInfo *)0x0);
    uVar5 = func_?(&TypeInfo__System__Exception);
    pEVar6 = (Exception *)func_?(uVar5);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar6,pSVar3,(MethodInfo *)0x0);
    uVar5 = func_?(&
                                MethodInfo__MV__WorldObject__InteractionData__Validate_MethodInfo__MV__WorldObject__InteractionData__MV__WorldObject__InteractionPackageType__float__UnityEngine__Vector3__MV__Common__PlayerKilledByType_
                               );
    FUN_?(pEVar6,uVar5);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((undefined1)playerKilledByType != PlayerKilledByType__Enum_None) {
    uVar11 = sharedInteractionData->playerKilledByType;
    auStack_2._0_4_ = sharedInteractionData->damage;
    auStack_2._4_4_ = (sharedInteractionData->impulse).x;
    fStack_12 = (sharedInteractionData->impulse).y;
    fStack_13 = (sharedInteractionData->impulse).z;
    if (uVar11 != '\0') {
      func_?(&TypeInfo__MV__WorldObject__InteractionPackageType);
      func_?(auStack_2);
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)auStack_2,(MethodInfo *)0x0);
      pSVar4 = (String *)func_?(&StringLiteral_Both_sharedValues_playerKilledBy);
      pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar4,pSVar3,(MethodInfo *)0x0);
      uVar5 = func_?(&TypeInfo__System__Exception);
      pEVar6 = (Exception *)func_?(uVar5);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar6,pSVar3,(MethodInfo *)0x0);
      uVar5 = func_?(&
                                  MethodInfo__MV__WorldObject__InteractionData__Validate_MethodInfo__MV__WorldObject__InteractionData__MV__WorldObject__InteractionPackageType__float__UnityEngine__Vector3__MV__Common__PlayerKilledByType_
                                 );
      FUN_?(pEVar6,uVar5);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  return;
}


/* Boolean ValidateVector3(Vector3) */

bool MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_ValidateVector3
               (Vector3 *validateVector,MethodInfo *method)

{
  if ((((ABS(validateVector->x) != INFINITY) && ((uint)ABS(validateVector->x) < 0x7f800001)) &&
      (ABS(validateVector->y) != INFINITY)) &&
     ((((uint)ABS(validateVector->y) < 0x7f800001 && (ABS(validateVector->z) != INFINITY)) &&
      ((uint)ABS(validateVector->z) < 0x7f800001)))) {
    return 1;
  }
  return 0;
}


/* InteractionData() */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__InteractionData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>
                      );
  pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Dictionary__
           ->klass->rgctx_data->method;
  pEVar2 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::ByteEnum]::
           EqualityComparer_1_System_ByteEnum__get_Default(pMVar1->klass->rgctx_data[3].method);
  if ((pEVar2 != (EqualityComparer_1_System_ByteEnum_ *)0x0) &&
     (bVar3 = iRam_? != 0,
     (this->fields)._comparer = (IEqualityComparer_1_MV_WorldObject_InteractionPackageType_ *)0x0,
     bVar3)) {
    uVar4 = (uint)((ulonglong)&(this->fields)._comparer >> 0xc);
    pMVar1 = (MethodInfo *)(ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)((longlong)pMVar1 * 8 + 0xADDR);
      puVar6 = (ulonglong *)((longlong)pMVar1 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar5 == *puVar6;
      if (bVar3) {
        *puVar6 = uVar5 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar7 = &IStack_8;
  IStack_9.interactionType = 0;
  IStack_9.playerKilledByType = 0;
  IStack_9._18_2_ = 0;
  IStack_9.damage = 0.0;
  IStack_9.impulse.x = 0.0;
  IStack_9.impulse.y = 0.0;
  IStack_9.impulse.z = 0.0;
  uVar10 = CONCAT71((int7)((ulonglong)pMVar1 >> 8),9);
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  IStack_8.damage = (pVVar11->zeroVector).x;
  IStack_8.impulse.x = (pVVar11->zeroVector).y;
  IStack_8.impulse.y = (pVVar11->zeroVector).z;
  InteractionData__ctor_6
            (&IStack_9,(InteractionPackageType__Enum)uVar10,_UNK_?,(Vector3 *)pIVar7,
             in_stack_12 & 0xffffff00,1,(MethodInfo *)0x0);
  if (this == (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_ *)
              0x0) {
    FUN_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  IStack_8.interactionType = IStack_9.interactionType;
  IStack_8.playerKilledByType = IStack_9.playerKilledByType;
  IStack_8._18_2_ = IStack_9._18_2_;
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),9);
  IStack_8.damage = IStack_9.damage;
  IStack_8.impulse.x = IStack_9.impulse.x;
  IStack_8.impulse.y = IStack_9.impulse.y;
  IStack_8.impulse.z = IStack_9.impulse.z;
  pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  InteractionData]::Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__TryInsert
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)this,
             (ByteEnum__Enum)uVar10,&IStack_8,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar7 >> 8),2),pMVar1);
  PVar14 = (PlayerKilledByType__Enum)pMVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar7 = &IStack_8;
  IStack_9.interactionType = 0;
  IStack_9.playerKilledByType = 0;
  IStack_9._18_2_ = 0;
  IStack_9.damage = 0.0;
  IStack_9.impulse.x = 0.0;
  IStack_9.impulse.y = 0.0;
  IStack_9.impulse.z = 0.0;
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),6);
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  IStack_8.damage = (pVVar11->zeroVector).x;
  IStack_8.impulse.x = (pVVar11->zeroVector).y;
  IStack_8.impulse.y = (pVVar11->zeroVector).z;
  InteractionData__ctor_6
            (&IStack_9,(InteractionPackageType__Enum)uVar10,_UNK_?,(Vector3 *)pIVar7,
             PVar14 & 0xffffff00,1,(MethodInfo *)0x0);
  IStack_8.interactionType = IStack_9.interactionType;
  IStack_8.playerKilledByType = IStack_9.playerKilledByType;
  IStack_8._18_2_ = IStack_9._18_2_;
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),6);
  IStack_8.damage = IStack_9.damage;
  IStack_8.impulse.x = IStack_9.impulse.x;
  IStack_8.impulse.y = IStack_9.impulse.y;
  IStack_8.impulse.z = IStack_9.impulse.z;
  pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  InteractionData]::Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__TryInsert
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)this,
             (ByteEnum__Enum)uVar10,&IStack_8,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar7 >> 8),2),pMVar1);
  PVar14 = (PlayerKilledByType__Enum)pMVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar7 = &IStack_8;
  IStack_9.interactionType = 0;
  IStack_9.playerKilledByType = 0;
  IStack_9._18_2_ = 0;
  IStack_9.damage = 0.0;
  IStack_9.impulse.x = 0.0;
  IStack_9.impulse.y = 0.0;
  IStack_9.impulse.z = 0.0;
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),4);
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  IStack_8.damage = (pVVar11->zeroVector).x;
  IStack_8.impulse.x = (pVVar11->zeroVector).y;
  IStack_8.impulse.y = (pVVar11->zeroVector).z;
  InteractionData__ctor_6
            (&IStack_9,(InteractionPackageType__Enum)uVar10,_UNK_?,(Vector3 *)pIVar7,
             PVar14 & 0xffffff00,1,(MethodInfo *)0x0);
  IStack_8.interactionType = IStack_9.interactionType;
  IStack_8.playerKilledByType = IStack_9.playerKilledByType;
  IStack_8._18_2_ = IStack_9._18_2_;
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),4);
  IStack_8.damage = IStack_9.damage;
  IStack_8.impulse.x = IStack_9.impulse.x;
  IStack_8.impulse.y = IStack_9.impulse.y;
  IStack_8.impulse.z = IStack_9.impulse.z;
  pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  InteractionData]::Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__TryInsert
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)this,
             (ByteEnum__Enum)uVar10,&IStack_8,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar7 >> 8),2),pMVar1);
  PVar14 = (PlayerKilledByType__Enum)pMVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar7 = &IStack_8;
  IStack_9.interactionType = 0;
  IStack_9.playerKilledByType = 0;
  IStack_9._18_2_ = 0;
  IStack_9.damage = 0.0;
  IStack_9.impulse.x = 0.0;
  IStack_9.impulse.y = 0.0;
  IStack_9.impulse.z = 0.0;
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),7);
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  IStack_8.damage = (pVVar11->zeroVector).x;
  IStack_8.impulse.x = (pVVar11->zeroVector).y;
  IStack_8.impulse.y = (pVVar11->zeroVector).z;
  InteractionData__ctor_6
            (&IStack_9,(InteractionPackageType__Enum)uVar10,_UNK_?,(Vector3 *)pIVar7,
             PVar14 & 0xffffff00,1,(MethodInfo *)0x0);
  IStack_8.interactionType = IStack_9.interactionType;
  IStack_8.playerKilledByType = IStack_9.playerKilledByType;
  IStack_8._18_2_ = IStack_9._18_2_;
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),7);
  IStack_8.damage = IStack_9.damage;
  IStack_8.impulse.x = IStack_9.impulse.x;
  IStack_8.impulse.y = IStack_9.impulse.y;
  IStack_8.impulse.z = IStack_9.impulse.z;
  pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  InteractionData]::Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__TryInsert
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)this,
             (ByteEnum__Enum)uVar10,&IStack_8,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar7 >> 8),2),pMVar1);
  PVar14 = (PlayerKilledByType__Enum)pMVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar7 = &IStack_8;
  IStack_9.interactionType = 0;
  IStack_9.playerKilledByType = 0;
  IStack_9._18_2_ = 0;
  IStack_9.damage = 0.0;
  IStack_9.impulse.x = 0.0;
  IStack_9.impulse.y = 0.0;
  IStack_9.impulse.z = 0.0;
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),0xe);
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  IStack_8.damage = (pVVar11->zeroVector).x;
  IStack_8.impulse.x = (pVVar11->zeroVector).y;
  IStack_8.impulse.y = (pVVar11->zeroVector).z;
  InteractionData__ctor_6
            (&IStack_9,(InteractionPackageType__Enum)uVar10,_UNK_?,(Vector3 *)pIVar7,
             PVar14 & 0xffffff00,1,(MethodInfo *)0x0);
  IStack_8.interactionType = IStack_9.interactionType;
  IStack_8.playerKilledByType = IStack_9.playerKilledByType;
  IStack_8._18_2_ = IStack_9._18_2_;
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),0xe);
  IStack_8.damage = IStack_9.damage;
  IStack_8.impulse.x = IStack_9.impulse.x;
  IStack_8.impulse.y = IStack_9.impulse.y;
  IStack_8.impulse.z = IStack_9.impulse.z;
  pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  InteractionData]::Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__TryInsert
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)this,
             (ByteEnum__Enum)uVar10,&IStack_8,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar7 >> 8),2),pMVar1);
  PVar14 = (PlayerKilledByType__Enum)pMVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar7 = &IStack_8;
  IStack_9.interactionType = 0;
  IStack_9.playerKilledByType = 0;
  IStack_9._18_2_ = 0;
  IStack_9.damage = 0.0;
  IStack_9.impulse.x = 0.0;
  IStack_9.impulse.y = 0.0;
  IStack_9.impulse.z = 0.0;
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),0x19);
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  IStack_8.damage = (pVVar11->zeroVector).x;
  IStack_8.impulse.x = (pVVar11->zeroVector).y;
  IStack_8.impulse.y = (pVVar11->zeroVector).z;
  InteractionData__ctor_6
            (&IStack_9,(InteractionPackageType__Enum)uVar10,_UNK_?,(Vector3 *)pIVar7,
             PVar14 & 0xffffff00,1,(MethodInfo *)0x0);
  IStack_8.interactionType = IStack_9.interactionType;
  IStack_8.playerKilledByType = IStack_9.playerKilledByType;
  IStack_8._18_2_ = IStack_9._18_2_;
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),0x19);
  IStack_8.damage = IStack_9.damage;
  IStack_8.impulse.x = IStack_9.impulse.x;
  IStack_8.impulse.y = IStack_9.impulse.y;
  IStack_8.impulse.z = IStack_9.impulse.z;
  pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  InteractionData]::Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__TryInsert
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)this,
             (ByteEnum__Enum)uVar10,&IStack_8,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar7 >> 8),2),pMVar1);
  PVar14 = (PlayerKilledByType__Enum)pMVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar7 = &IStack_8;
  IStack_9.interactionType = 0;
  IStack_9.playerKilledByType = 0;
  IStack_9._18_2_ = 0;
  IStack_9.damage = 0.0;
  IStack_9.impulse.x = 0.0;
  IStack_9.impulse.y = 0.0;
  IStack_9.impulse.z = 0.0;
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),0xf);
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  IStack_8.damage = (pVVar11->zeroVector).x;
  IStack_8.impulse.x = (pVVar11->zeroVector).y;
  IStack_8.impulse.y = (pVVar11->zeroVector).z;
  InteractionData__ctor_6
            (&IStack_9,(InteractionPackageType__Enum)uVar10,_UNK_?,(Vector3 *)pIVar7,
             PVar14 & 0xffffff00,1,(MethodInfo *)0x0);
  IStack_8.interactionType = IStack_9.interactionType;
  IStack_8.playerKilledByType = IStack_9.playerKilledByType;
  IStack_8._18_2_ = IStack_9._18_2_;
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),0xf);
  IStack_8.damage = IStack_9.damage;
  IStack_8.impulse.x = IStack_9.impulse.x;
  IStack_8.impulse.y = IStack_9.impulse.y;
  IStack_8.impulse.z = IStack_9.impulse.z;
  pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  InteractionData]::Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__TryInsert
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)this,
             (ByteEnum__Enum)uVar10,&IStack_8,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar7 >> 8),2),pMVar1);
  PVar14 = (PlayerKilledByType__Enum)pMVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar7 = &IStack_8;
  IStack_9.interactionType = 0;
  IStack_9.playerKilledByType = 0;
  IStack_9._18_2_ = 0;
  IStack_9.damage = 0.0;
  IStack_9.impulse.x = 0.0;
  IStack_9.impulse.y = 0.0;
  IStack_9.impulse.z = 0.0;
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),0x18);
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  IStack_8.damage = (pVVar11->zeroVector).x;
  IStack_8.impulse.x = (pVVar11->zeroVector).y;
  IStack_8.impulse.y = (pVVar11->zeroVector).z;
  InteractionData__ctor_6
            (&IStack_9,(InteractionPackageType__Enum)uVar10,_UNK_?,(Vector3 *)pIVar7,
             PVar14 & 0xffffff00,1,(MethodInfo *)0x0);
  IStack_8.interactionType = IStack_9.interactionType;
  IStack_8.playerKilledByType = IStack_9.playerKilledByType;
  IStack_8._18_2_ = IStack_9._18_2_;
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),0x18);
  IStack_8.damage = IStack_9.damage;
  IStack_8.impulse.x = IStack_9.impulse.x;
  IStack_8.impulse.y = IStack_9.impulse.y;
  IStack_8.impulse.z = IStack_9.impulse.z;
  pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  InteractionData]::Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__TryInsert
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)this,
             (ByteEnum__Enum)uVar10,&IStack_8,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar7 >> 8),2),pMVar1);
  PVar14 = (PlayerKilledByType__Enum)pMVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar7 = &IStack_8;
  IStack_9.interactionType = 0;
  IStack_9.playerKilledByType = 0;
  IStack_9._18_2_ = 0;
  IStack_9.damage = 0.0;
  IStack_9.impulse.x = 0.0;
  IStack_9.impulse.y = 0.0;
  IStack_9.impulse.z = 0.0;
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  IStack_8.damage = (pVVar11->zeroVector).x;
  IStack_8.impulse.x = (pVVar11->zeroVector).y;
  IStack_8.impulse.y = (pVVar11->zeroVector).z;
  InteractionData__ctor_6
            (&IStack_9,(InteractionPackageType__Enum)CONCAT71((int7)((ulonglong)uVar10 >> 8),0x1a),
             _UNK_?,(Vector3 *)pIVar7,PVar14 & 0xffffff00,1,(MethodInfo *)0x0);
  IStack_8.interactionType = IStack_9.interactionType;
  IStack_8.playerKilledByType = IStack_9.playerKilledByType;
  IStack_8._18_2_ = IStack_9._18_2_;
  IStack_8.damage = IStack_9.damage;
  IStack_8.impulse.x = IStack_9.impulse.x;
  IStack_8.impulse.y = IStack_9.impulse.y;
  IStack_8.impulse.z = IStack_9.impulse.z;
  pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
           ->klass->rgctx_data[0x22].method;
  uVar10 = CONCAT71((int7)((ulonglong)pMVar1 >> 8),0x1a);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  InteractionData]::Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__TryInsert
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)this,
             (ByteEnum__Enum)uVar10,&IStack_8,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar7 >> 8),2),pMVar1);
  PVar14 = (PlayerKilledByType__Enum)pMVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  IStack_9.interactionType = 0;
  IStack_9.playerKilledByType = 0;
  IStack_9._18_2_ = 0;
  pIVar7 = &IStack_8;
  IStack_9.damage = 0.0;
  IStack_9.impulse.x = 0.0;
  IStack_9.impulse.y = 0.0;
  IStack_9.impulse.z = 0.0;
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),0x13);
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  IStack_8.damage = (pVVar11->zeroVector).x;
  IStack_8.impulse.x = (pVVar11->zeroVector).y;
  IStack_8.impulse.y = (pVVar11->zeroVector).z;
  InteractionData__ctor_6
            (&IStack_9,(InteractionPackageType__Enum)uVar10,0.0,(Vector3 *)pIVar7,
             PVar14 & 0xffffff00,1,(MethodInfo *)0x0);
  IStack_8.interactionType = IStack_9.interactionType;
  IStack_8.playerKilledByType = IStack_9.playerKilledByType;
  IStack_8._18_2_ = IStack_9._18_2_;
  IStack_8.damage = IStack_9.damage;
  IStack_8.impulse.x = IStack_9.impulse.x;
  IStack_8.impulse.y = IStack_9.impulse.y;
  IStack_8.impulse.z = IStack_9.impulse.z;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  InteractionData]::Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__TryInsert
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)uVar10 >> 8),0x13),&IStack_8,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar7 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
             ->klass->rgctx_data[0x22].method);
  TypeInfo__MV__WorldObject__InteractionData->static_fields->sharedStaticValues = this;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)TypeInfo__MV__WorldObject__InteractionData->static_fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar15 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar15 == *puVar6;
      if (bVar3) {
        *puVar6 = uVar15 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  return;
}


/* InteractionData(InteractionPackageType) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor
               (InteractionData *this,InteractionPackageType__Enum interactionType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  IStack_1.interactionType = 0;
  IStack_1.playerKilledByType = 0;
  IStack_1._18_2_ = 0;
  IStack_1.damage = 0.0;
  IStack_1.impulse.x = 0.0;
  IStack_1.impulse.y = 0.0;
  IStack_1.impulse.z = 0.0;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_3.x = (pVVar2->zeroVector).x;
  VStack_3.y = (pVVar2->zeroVector).y;
  VStack_3.z = (pVVar2->zeroVector).z;
  InteractionData__ctor_5
            (&IStack_1,interactionType & 0xff,0.0,&VStack_3,in_stack_4 & 0xffffff00
             ,(MethodInfo *)0x0);
  this->damage = IStack_1.damage;
  (this->impulse).x = IStack_1.impulse.x;
  (this->impulse).y = IStack_1.impulse.y;
  (this->impulse).z = IStack_1.impulse.z;
  this->interactionType = IStack_1.interactionType;
  this->playerKilledByType = IStack_1.playerKilledByType;
  *(undefined2 *)&this->field_0x12 = IStack_1._18_2_;
  return;
}


/* InteractionData(InteractionPackageType, Vector3) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_1
               (InteractionData *this,InteractionPackageType__Enum interactionType,Vector3 *impulse,
               MethodInfo *method)

{
  IStack_1.damage = 0.0;
  IStack_1.impulse.x = 0.0;
  IStack_1.impulse.y = 0.0;
  IStack_1.impulse.z = 0.0;
  VStack_2.x = impulse->x;
  VStack_2.y = impulse->y;
  IStack_1.interactionType = 0;
  IStack_1.playerKilledByType = 0;
  IStack_1._18_2_ = 0;
  VStack_2.z = impulse->z;
  InteractionData__ctor_5
            (&IStack_1,interactionType,0.0,&VStack_2,in_stack_3 & 0xffffff00,
             (MethodInfo *)0x0);
  this->damage = IStack_1.damage;
  (this->impulse).x = IStack_1.impulse.x;
  (this->impulse).y = IStack_1.impulse.y;
  (this->impulse).z = IStack_1.impulse.z;
  this->interactionType = IStack_1.interactionType;
  this->playerKilledByType = IStack_1.playerKilledByType;
  *(undefined2 *)&this->field_0x12 = IStack_1._18_2_;
  return;
}


/* InteractionData(InteractionPackageType, Single, Vector3) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_2
               (InteractionData *this,InteractionPackageType__Enum interactionType,float damage,
               Vector3 *impulse,MethodInfo *method)

{
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
  InteractionData__ctor_5
            (&IStack_1,interactionType,damage,&VStack_2,in_stack_3 & 0xffffff00,
             (MethodInfo *)0x0);
  this->damage = IStack_1.damage;
  (this->impulse).x = IStack_1.impulse.x;
  (this->impulse).y = IStack_1.impulse.y;
  (this->impulse).z = IStack_1.impulse.z;
  this->interactionType = IStack_1.interactionType;
  this->playerKilledByType = IStack_1.playerKilledByType;
  *(undefined2 *)&this->field_0x12 = IStack_1._18_2_;
  return;
}


/* InteractionData(InteractionPackageType, PlayerKilledByType) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_3
               (InteractionData *this,InteractionPackageType__Enum interactionType,
               PlayerKilledByType__Enum playerKilledByType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  IStack_1.interactionType = 0;
  IStack_1.playerKilledByType = 0;
  IStack_1._18_2_ = 0;
  IStack_1.damage = 0.0;
  IStack_1.impulse.x = 0.0;
  IStack_1.impulse.y = 0.0;
  IStack_1.impulse.z = 0.0;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_3.x = (pVVar2->zeroVector).x;
  VStack_3.y = (pVVar2->zeroVector).y;
  VStack_3.z = (pVVar2->zeroVector).z;
  InteractionData__ctor_5
            (&IStack_1,interactionType & 0xff,0.0,&VStack_3,
             CONCAT31((int3)((uint)in_stack_4 >> 8),(char)playerKilledByType),
             (MethodInfo *)0x0);
  this->damage = IStack_1.damage;
  (this->impulse).x = IStack_1.impulse.x;
  (this->impulse).y = IStack_1.impulse.y;
  (this->impulse).z = IStack_1.impulse.z;
  this->interactionType = IStack_1.interactionType;
  this->playerKilledByType = IStack_1.playerKilledByType;
  *(undefined2 *)&this->field_0x12 = IStack_1._18_2_;
  return;
}


/* InteractionData(InteractionPackageType, Vector3, PlayerKilledByType) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_4
               (InteractionData *this,InteractionPackageType__Enum interactionType,Vector3 *impulse,
               PlayerKilledByType__Enum playerKilledByType,MethodInfo *method)

{
  IStack_1.damage = 0.0;
  IStack_1.impulse.x = 0.0;
  IStack_1.impulse.y = 0.0;
  IStack_1.impulse.z = 0.0;
  VStack_2.x = impulse->x;
  VStack_2.y = impulse->y;
  IStack_1.interactionType = 0;
  IStack_1.playerKilledByType = 0;
  IStack_1._18_2_ = 0;
  VStack_2.z = impulse->z;
  InteractionData__ctor_5
            (&IStack_1,interactionType,0.0,&VStack_2,
             CONCAT31((int3)((uint)in_stack_3 >> 8),(char)playerKilledByType),
             (MethodInfo *)0x0);
  this->damage = IStack_1.damage;
  (this->impulse).x = IStack_1.impulse.x;
  (this->impulse).y = IStack_1.impulse.y;
  (this->impulse).z = IStack_1.impulse.z;
  this->interactionType = IStack_1.interactionType;
  this->playerKilledByType = IStack_1.playerKilledByType;
  *(undefined2 *)&this->field_0x12 = IStack_1._18_2_;
  return;
}


/* InteractionData(InteractionPackageType, Single, Vector3, PlayerKilledByType) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
               (InteractionData *this,InteractionPackageType__Enum interactionType,float damage,
               Vector3 *impulse,PlayerKilledByType__Enum playerKilledByType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__InteractionData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this->interactionType = (uint8_t)interactionType;
  if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar1 = InteractionData_GetSharedData(aIStack_2,interactionType & 0xff,(MethodInfo *)0x0);
  VStack_3.z = impulse->z;
  VStack_3.x = impulse->x;
  VStack_3.y = impulse->y;
  fVar4 = pIVar1->damage;
  IStack_5.impulse.x = (pIVar1->impulse).x;
  IStack_5.impulse.y = (pIVar1->impulse).y;
  fVar6 = (pIVar1->impulse).z;
  uVar7._0_1_ = pIVar1->interactionType;
  uVar7._1_1_ = pIVar1->playerKilledByType;
  uVar7._2_2_ = *(undefined2 *)&pIVar1->field_0x12;
  IStack_5.damage = fVar4;
  IStack_5.impulse.z = fVar6;
  IStack_5._16_4_ = uVar7;
  fStack_8 = fVar4;
  fStack_9 = IStack_5.impulse.x;
  fStack_10 = IStack_5.impulse.y;
  fStack_11 = fVar6;
  InteractionData_Validate
            (&IStack_5,interactionType & 0xff,damage,&VStack_3,
             CONCAT31((int3)((uint)in_stack_12 >> 8),(undefined1)playerKilledByType),
             (MethodInfo *)0x0);
  if ((ABS(damage) == INFINITY) || (fVar13 = damage, 0x7f800000 < (uint)ABS(damage))) {
    fVar13 = 0.0;
  }
  this->damage = fVar13;
  if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_3.x = impulse->x;
  VStack_3.y = impulse->y;
  if ((((ABS(VStack_3.x) == INFINITY) || (0x7f800000 < (uint)ABS(VStack_3.x))) ||
      (ABS(VStack_3.y) == INFINITY)) ||
     (((0x7f800000 < (uint)ABS(VStack_3.y) || (ABS(impulse->z) == INFINITY)) ||
      (0x7f800000 < (uint)ABS(impulse->z))))) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar15 = (pVVar14->zeroVector).x;
    uVar16 = (pVVar14->zeroVector).y;
    fVar13 = (pVVar14->zeroVector).z;
    uVar17 = uVar15;
    uVar18 = uVar16;
  }
  else {
    uVar17 = impulse->x;
    uVar18 = impulse->y;
    fVar13 = impulse->z;
  }
  (this->impulse).x = (float)uVar17;
  (this->impulse).y = (float)uVar18;
  (this->impulse).z = fVar13;
  this->playerKilledByType = (undefined1)playerKilledByType;
  if (damage == 0.0) {
    this->damage = fVar4;
  }
  if (impulse->x * impulse->x + impulse->y * impulse->y + impulse->z * impulse->z <= _UNK_?)
  {
    (this->impulse).x = fStack_9;
    (this->impulse).y = fStack_10;
    (this->impulse).z = fVar6;
  }
  if ((undefined1)playerKilledByType == PlayerKilledByType__Enum_None) {
    this->playerKilledByType = uVar7._1_1_;
  }
  return;
}


/* InteractionData(InteractionPackageType, Single, Vector3, PlayerKilledByType, Boolean) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_6
               (InteractionData *this,InteractionPackageType__Enum interactionType,float damage,
               Vector3 *impulse,PlayerKilledByType__Enum playerKilledByType,bool isShared,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__InteractionData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this->interactionType = (uint8_t)interactionType;
  if ((ABS(damage) == INFINITY) || (0x7f800000 < (uint)ABS(damage))) {
    damage = 0.0;
  }
  this->damage = damage;
  if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = impulse->x;
  uVar2 = impulse->y;
  if (((((uVar1 & 0x7fffffff) == 0x7f800000) || (0x7f800000 < (uVar1 & 0x7fffffff))) ||
      ((uVar2 & 0x7fffffff) == 0x7f800000)) ||
     (((0x7f800000 < (uVar2 & 0x7fffffff) || (ABS(impulse->z) == INFINITY)) ||
      (0x7f800000 < (uint)ABS(impulse->z))))) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar4 = (pVVar3->zeroVector).x;
    uVar5 = (pVVar3->zeroVector).y;
    fVar6 = (pVVar3->zeroVector).z;
    uVar7 = uVar4;
    uVar8 = uVar5;
  }
  else {
    uVar7 = impulse->x;
    uVar8 = impulse->y;
    fVar6 = impulse->z;
  }
  (this->impulse).x = (float)uVar7;
  (this->impulse).y = (float)uVar8;
  (this->impulse).z = fVar6;
  this->playerKilledByType = (undefined1)playerKilledByType;
  return;
}


/* InteractionData(Byte[]) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_7
               (InteractionData *this,Byte__Array *byteArray,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__InteractionData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  this->damage = 0.0;
  this->interactionType = 0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->impulse).x = (pVVar2->zeroVector).x;
  (this->impulse).y = fVar3;
  (this->impulse).z = fVar4;
  this->playerKilledByType = 0;
  this_00 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
  BytePacker::BytePacker__ctor_1(this_00,byteArray,(MethodInfo *)0x0);
  if (this_00 != (BytePacker *)0x0) {
    uVar5 = BytePacker::BytePacker_ReadByte(this_00,(MethodInfo *)0x0);
    if ((uVar5 & 1) != 0) {
      uVar6 = BytePacker::BytePacker_ReadByte(this_00,(MethodInfo *)0x0);
      this->interactionType = uVar6;
    }
    bVar7 = this->interactionType;
    if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar8 = InteractionData_GetSharedData(aIStack_9,(uint)bVar7,(MethodInfo *)0x0);
    uVar10 = pIVar8->playerKilledByType;
    fVar3 = (pIVar8->impulse).x;
    fVar11 = (pIVar8->impulse).y;
    fVar4 = (pIVar8->impulse).z;
    if ((uVar5 & 2) == 0) {
      this->damage = pIVar8->damage;
    }
    else {
      fVar12 = BytePacker::BytePacker_ReadSingle(this_00,(MethodInfo *)0x0);
      this->damage = fVar12;
    }
    if ((uVar5 & 4) == 0) {
      (this->impulse).x = fVar3;
      (this->impulse).y = fVar11;
      (this->impulse).z = fVar4;
    }
    else {
      fVar4 = BytePacker::BytePacker_ReadSingle(this_00,(MethodInfo *)0x0);
      fVar3 = BytePacker::BytePacker_ReadSingle(this_00,(MethodInfo *)0x0);
      fVar11 = BytePacker::BytePacker_ReadSingle(this_00,(MethodInfo *)0x0);
      (this->impulse).x = fVar4;
      (this->impulse).y = fVar3;
      (this->impulse).z = fVar11;
    }
    if ((uVar5 & 8) == 0) {
      this->playerKilledByType = uVar10;
    }
    else {
      uVar5 = BytePacker::BytePacker_ReadByte(this_00,(MethodInfo *)0x0);
      this->playerKilledByType = uVar5;
    }
    return;
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

