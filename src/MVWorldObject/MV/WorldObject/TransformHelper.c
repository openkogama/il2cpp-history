
/* Vector3 GetPosition(Dictionary`2[System.Byte,System.Object]) */

Vector3 * MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                    (Vector3 *__return_storage_ptr__,
                    Dictionary_2_System_Byte_System_Object_ *positionData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (positionData != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    plVar1 = (longlong *)FUN_?(positionData,0x18);
    if (plVar1 != (longlong *)0x0) {
      if (*(longlong *)(*plVar1 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar1,lRam_?);
        pcVar2 = (code *)swi(3);
        pVVar3 = (Vector3 *)(*pcVar2)();
        return pVVar3;
      }
      fVar4 = MVMath::MVMath_TryValidateFloat(*(float *)(plVar1 + 2),(MethodInfo *)0x0);
      plVar1 = (longlong *)FUN_?(positionData,0x19);
      if (plVar1 != (longlong *)0x0) {
        if (*(longlong *)(*plVar1 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
          FUN_?(plVar1,lRam_?);
          pcVar2 = (code *)swi(3);
          pVVar3 = (Vector3 *)(*pcVar2)();
          return pVVar3;
        }
        fVar5 = MVMath::MVMath_TryValidateFloat(*(float *)(plVar1 + 2),(MethodInfo *)0x0);
        plVar1 = (longlong *)FUN_?(positionData,0x1a);
        if (plVar1 != (longlong *)0x0) {
          if (*(longlong *)(*plVar1 + 0x40) == *(longlong *)(lRam_? + 0x40)) {
            fVar6 = MVMath::MVMath_TryValidateFloat(*(float *)(plVar1 + 2),(MethodInfo *)0x0);
            __return_storage_ptr__->x = fVar4;
            __return_storage_ptr__->y = fVar5;
            __return_storage_ptr__->z = fVar6;
            return __return_storage_ptr__;
          }
          FUN_?(plVar1,lRam_?);
          pcVar2 = (code *)swi(3);
          pVVar3 = (Vector3 *)(*pcVar2)();
          return pVVar3;
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar2)();
  return pVVar3;
}


/* Quaternion GetRotation(Dictionary`2[System.Byte,System.Object]) */

Quaternion *
MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
          (Quaternion *__return_storage_ptr__,Dictionary_2_System_Byte_System_Object_ *rotationData,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (rotationData != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    plVar1 = (longlong *)FUN_?(rotationData,0x1b);
    if (plVar1 != (longlong *)0x0) {
      if (*(longlong *)(*plVar1 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar1,lRam_?);
        pcVar2 = (code *)swi(3);
        pQVar3 = (Quaternion *)(*pcVar2)();
        return pQVar3;
      }
      fVar4 = MVMath::MVMath_TryValidateFloat(*(float *)(plVar1 + 2),(MethodInfo *)0x0);
      plVar1 = (longlong *)FUN_?(rotationData,0x1c);
      if (plVar1 != (longlong *)0x0) {
        if (*(longlong *)(*plVar1 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
          FUN_?(plVar1,lRam_?);
          pcVar2 = (code *)swi(3);
          pQVar3 = (Quaternion *)(*pcVar2)();
          return pQVar3;
        }
        fVar5 = MVMath::MVMath_TryValidateFloat(*(float *)(plVar1 + 2),(MethodInfo *)0x0);
        plVar1 = (longlong *)FUN_?(rotationData,0x1d);
        if (plVar1 != (longlong *)0x0) {
          if (*(longlong *)(*plVar1 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
            FUN_?(plVar1,lRam_?);
            pcVar2 = (code *)swi(3);
            pQVar3 = (Quaternion *)(*pcVar2)();
            return pQVar3;
          }
          fVar6 = MVMath::MVMath_TryValidateFloat(*(float *)(plVar1 + 2),(MethodInfo *)0x0);
          plVar1 = (longlong *)FUN_?(rotationData,0x1e);
          if (plVar1 != (longlong *)0x0) {
            if (*(longlong *)(*plVar1 + 0x40) == *(longlong *)(lRam_? + 0x40)) {
              fVar7 = MVMath::MVMath_TryValidateFloat(*(float *)(plVar1 + 2),(MethodInfo *)0x0);
              __return_storage_ptr__->x = fVar4;
              __return_storage_ptr__->y = fVar5;
              __return_storage_ptr__->z = fVar6;
              __return_storage_ptr__->w = fVar7;
              return __return_storage_ptr__;
            }
            FUN_?(plVar1,lRam_?);
            pcVar2 = (code *)swi(3);
            pQVar3 = (Quaternion *)(*pcVar2)();
            return pQVar3;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pQVar3 = (Quaternion *)(*pcVar2)();
  return pQVar3;
}


/* Void SetPosition(Vector3, Dictionary`2[System.Byte,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
               (Vector3 *position,Dictionary_2_System_Byte_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_8[0] = MVMath::MVMath_TryValidateFloat(position->x,(MethodInfo *)0x0);
  pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
  if (data != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    IVar2 = CONCAT31((int3)((uint)in_R9D >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (data,0x18,pOVar1,IVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_8[0] = MVMath::MVMath_TryValidateFloat(position->y,(MethodInfo *)0x0);
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
    IVar2 = CONCAT31((int3)(IVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (data,0x19,pOVar1,IVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_8[0] = MVMath::MVMath_TryValidateFloat(position->z,(MethodInfo *)0x0);
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (data,0x1a,pOVar1,CONCAT31((int3)(IVar2 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetRotation(Quaternion, Dictionary`2[System.Byte,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation
               (Quaternion *rotation,Dictionary_2_System_Byte_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_8[0] = MVMath::MVMath_TryValidateFloat(rotation->x,(MethodInfo *)0x0);
  pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
  if (data != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    IVar2 = CONCAT31((int3)((uint)in_R9D >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (data,0x1b,pOVar1,IVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_8[0] = MVMath::MVMath_TryValidateFloat(rotation->y,(MethodInfo *)0x0);
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
    IVar2 = CONCAT31((int3)(IVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (data,0x1c,pOVar1,IVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_8[0] = MVMath::MVMath_TryValidateFloat(rotation->z,(MethodInfo *)0x0);
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
    IVar2 = CONCAT31((int3)(IVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (data,0x1d,pOVar1,IVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_8[0] = MVMath::MVMath_TryValidateFloat(rotation->w,(MethodInfo *)0x0);
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (data,0x1e,pOVar1,CONCAT31((int3)(IVar2 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetScale(Vector3, Dictionary`2[System.Byte,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetScale
               (Vector3 *scale,Dictionary_2_System_Byte_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_8[0] = MVMath::MVMath_TryValidateFloat(scale->x,(MethodInfo *)0x0);
  pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
  if (data != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    IVar2 = CONCAT31((int3)((uint)in_R9D >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (data,0x1f,pOVar1,IVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_8[0] = MVMath::MVMath_TryValidateFloat(scale->y,(MethodInfo *)0x0);
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
    IVar2 = CONCAT31((int3)(IVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (data,0x20,pOVar1,IVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_8[0] = MVMath::MVMath_TryValidateFloat(scale->z,(MethodInfo *)0x0);
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (data,0x21,pOVar1,CONCAT31((int3)(IVar2 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

