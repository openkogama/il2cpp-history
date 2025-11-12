
/* Void OverrideRuntimeType(RuntimeEventType) */

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
     SingleCubeFineGrainedEvent_OverrideRuntimeType
               (SingleCubeFineGrainedEvent *this,RuntimeEventType__Enum runtimeEventType,
               MethodInfo *method)

{
  (this->fields)._._RuntimeEventType_k__BackingField = (uint8_t)runtimeEventType;
  return;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
         SingleCubeFineGrainedEvent_ToString(SingleCubeFineGrainedEvent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__RuntimeEventType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RuntimeEventType___0___Position_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStackX_8 = CONCAT31(uStackX_8._1_3_,(this->fields)._._RuntimeEventType_k__BackingField);
  arg0 = (Object *)FUN_?(TypeInfo__MV__Common__RuntimeEventType,&uStackX_8);
  uStackX_8._0_2_ = (this->fields)._.position.x;
  uStackX_8._2_2_ = (this->fields)._.position.y;
  iStackX_c = (this->fields)._.position.z;
  arg1 = (Object *)FUN_?(TypeInfo__MV__WorldObject__IntVector,&uStackX_8);
  uStackX_8 = CONCAT31(uStackX_8._1_3_,(this->fields).material);
  arg2 = (Object *)FUN_?(uRam_?,&uStackX_8);
  pSVar1 = StringLiteral_RuntimeEventType___0___Position_;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
            (&PStack_2,arg0,arg1,arg2,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* SingleCubeFineGrainedEvent(IntVector, Byte) */

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
     SingleCubeFineGrainedEvent__ctor
               (SingleCubeFineGrainedEvent *this,IntVector *position,uint8_t material,
               MethodInfo *method)

{
  iVar1 = position->y;
  (this->fields)._.position.x = position->x;
  (this->fields)._.position.y = iVar1;
  (this->fields)._.position.z = position->z;
  (this->fields)._._RuntimeEventType_k__BackingField = 1;
  (this->fields).material = material;
  return;
}


/* SingleCubeFineGrainedEvent(IntVector) */

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
     SingleCubeFineGrainedEvent__ctor_1
               (SingleCubeFineGrainedEvent *this,IntVector *position,MethodInfo *method)

{
  iVar1 = position->y;
  (this->fields)._.position.x = position->x;
  (this->fields)._.position.y = iVar1;
  (this->fields)._.position.z = position->z;
  (this->fields)._._RuntimeEventType_k__BackingField = 2;
  return;
}


/* SingleCubeFineGrainedEvent(RuntimeEventType, BytePacker) */

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
     SingleCubeFineGrainedEvent__ctor_2
               (SingleCubeFineGrainedEvent *this,RuntimeEventType__Enum runtimeEventType,
               BytePacker *bp,MethodInfo *method)

{
  (this->fields)._._RuntimeEventType_k__BackingField = (uint8_t)runtimeEventType;
  if (bp != (BytePacker *)0x0) {
    if ((uint8_t)runtimeEventType == 1) {
      uVar1 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
      (this->fields).material = uVar1;
    }
    iVar2 = BytePacker::BytePacker_ReadInt16(bp,(MethodInfo *)0x0);
    iVar3 = BytePacker::BytePacker_ReadInt16(bp,(MethodInfo *)0x0);
    iVar4 = BytePacker::BytePacker_ReadInt16(bp,(MethodInfo *)0x0);
    (this->fields)._.position.x = iVar2;
    (this->fields)._.position.y = iVar3;
    (this->fields)._.position.z = iVar4;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Byte[] get_Data() */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
SingleCubeFineGrainedEvent_get_Data(SingleCubeFineGrainedEvent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
  BytePacker::BytePacker__ctor(this_00,(MethodInfo *)0x0);
  if (this_00 != (BytePacker *)0x0) {
    BytePacker::BytePacker_Write
              (this_00,(this->fields)._._RuntimeEventType_k__BackingField,(MethodInfo *)0x0);
    if ((this->fields)._._RuntimeEventType_k__BackingField == 1) {
      BytePacker::BytePacker_Write(this_00,(this->fields).material,(MethodInfo *)0x0);
    }
    BytePacker::BytePacker_Write_4(this_00,(this->fields)._.position.x,(MethodInfo *)0x0);
    BytePacker::BytePacker_Write_4(this_00,(this->fields)._.position.y,(MethodInfo *)0x0);
    BytePacker::BytePacker_Write_4(this_00,(this->fields)._.position.z,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__;
    pLVar2 = (this_00->fields)._buffer;
    if (pLVar2 != (List_1_System_Byte_ *)0x0) {
      if ((pLVar2->fields)._size != 0) {
        pvVar3 = MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__->klass->
                 rgctx_data[3].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
          pvVar3 = (void *)FUN_?(pvVar3);
        }
        pBVar4 = (Byte__Array *)FUN_?(pvVar3);
        mscorlib.dll::System::Array::Array_Copy_3
                  ((Array *)(pLVar2->fields)._items,0,(Array *)pBVar4,0,(pLVar2->fields)._size,
                   (MethodInfo *)0x0);
        return pBVar4;
      }
      pvVar3 = MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__->klass->
               rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
        pvVar3 = (void *)FUN_?(pvVar3);
      }
      if (*(int *)((longlong)pvVar3 + 0xe4) == 0) {
        FUN_?(pvVar3);
      }
      pIVar5 = pMVar1->klass->rgctx_data[2].klass;
      if ((pIVar5->field_0x135 & 1) == 0) {
        pIVar5 = (Il2CppClass *)FUN_?(pIVar5);
      }
      return *(Byte__Array **)pIVar5->static_fields;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pBVar4 = (Byte__Array *)(*pcVar6)();
  return pBVar4;
}

