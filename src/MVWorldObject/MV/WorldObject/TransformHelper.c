
/* Vector3 GetPosition(IPosition) */

Vector3 * MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                    (Vector3 *__return_storage_ptr__,IPosition *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IPosition);
    cRam_? = '\x01';
  }
  if (position != (IPosition *)0x0) {
    fVar1 = (float10)func_?(0,TypeInfo__MV__WorldObject__IPosition,position);
    fVar2 = MVMath::MVMath_TryValidateFloat((float)fVar1,(MethodInfo *)0x0);
    fVar1 = (float10)func_?(2,TypeInfo__MV__WorldObject__IPosition,position);
    fVar3 = MVMath::MVMath_TryValidateFloat((float)fVar1,(MethodInfo *)0x0);
    fVar1 = (float10)func_?(4,TypeInfo__MV__WorldObject__IPosition,fVar3,fVar2);
    fVar2 = (float)fVar1;
    puVar4 = &UNK_?;
    fVar3 = MVMath::MVMath_TryValidateFloat(fVar2,(MethodInfo *)0x0);
    __return_storage_ptr__->x = fVar2;
    __return_storage_ptr__->y = (float)puVar4;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Vector3 GetPosition(Dictionary`2[System.Byte,System.Object]) */

Vector3 * MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition_1
                    (Vector3 *__return_storage_ptr__,
                    Dictionary_2_System_Byte_System_Object_ *positionData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                   );
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if (positionData != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)positionData,0x18,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar3 = (float *)func_?(pOVar1);
      fVar4 = MVMath::MVMath_TryValidateFloat(*pfVar3,(MethodInfo *)0x0);
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)positionData,0x19,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                         );
      uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar3 = (float *)func_?(pOVar1);
        MVMath::MVMath_TryValidateFloat(*pfVar3,(MethodInfo *)0x0);
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)positionData,0x1a,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
        if (pOVar1 != (Object *)0x0) {
          if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
            pfVar3 = (float *)func_?(pOVar1);
            fVar5 = 0.0;
            fVar6 = MVMath::MVMath_TryValidateFloat(*pfVar3,(MethodInfo *)0x0);
            __return_storage_ptr__->x = fVar4;
            __return_storage_ptr__->y = fVar5;
            __return_storage_ptr__->z = fVar6;
            return __return_storage_ptr__;
          }
          goto code_?;
        }
      }
    }
  }
  uVar2 = func_?();
code_?:
  func_?(uVar2);
  pcVar7 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar7)();
  return pVVar8;
}


/* Quaternion GetRotation(IRotation) */

Quaternion *
MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
          (Quaternion *__return_storage_ptr__,IRotation *rotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IRotation);
    cRam_? = '\x01';
  }
  if (rotation != (IRotation *)0x0) {
    fVar1 = (float10)func_?(0,TypeInfo__MV__WorldObject__IRotation,rotation);
    fVar2 = MVMath::MVMath_TryValidateFloat((float)fVar1,(MethodInfo *)0x0);
    fVar1 = (float10)func_?(2,TypeInfo__MV__WorldObject__IRotation,rotation);
    fVar3 = MVMath::MVMath_TryValidateFloat((float)fVar1,(MethodInfo *)0x0);
    fVar1 = (float10)func_?(4,TypeInfo__MV__WorldObject__IRotation,rotation,fVar3,fVar2);
    MVMath::MVMath_TryValidateFloat((float)fVar1,(MethodInfo *)0x0);
    fVar3 = 8.40779e-45;
    pIVar4 = TypeInfo__MV__WorldObject__IRotation;
    fVar1 = (float10)func_?(6,TypeInfo__MV__WorldObject__IRotation,rotation);
    puVar5 = &UNK_?;
    fVar2 = MVMath::MVMath_TryValidateFloat((float)fVar1,(MethodInfo *)0x0);
    __return_storage_ptr__->x = (float)puVar5;
    __return_storage_ptr__->y = (float)pIVar4;
    __return_storage_ptr__->z = fVar3;
    __return_storage_ptr__->w = fVar2;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pQVar7 = (Quaternion *)(*pcVar6)();
  return pQVar7;
}


/* Quaternion GetRotation(Dictionary`2[System.Byte,System.Object]) */

Quaternion *
MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation_1
          (Quaternion *__return_storage_ptr__,Dictionary_2_System_Byte_System_Object_ *rotationData,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                   );
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if (rotationData != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)rotationData,0x1b,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar3 = (float *)func_?(pOVar1);
      fVar4 = MVMath::MVMath_TryValidateFloat(*pfVar3,(MethodInfo *)0x0);
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)rotationData,0x1c,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                         );
      uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar3 = (float *)func_?(pOVar1);
        fVar5 = MVMath::MVMath_TryValidateFloat(*pfVar3,(MethodInfo *)0x0);
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)rotationData,0x1d,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
        if (pOVar1 != (Object *)0x0) {
          if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
          goto code_?;
          pfVar3 = (float *)func_?(pOVar1);
          MVMath::MVMath_TryValidateFloat(*pfVar3,(MethodInfo *)0x0);
          pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)rotationData,0x1e,
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                             );
          uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
          if (pOVar1 != (Object *)0x0) {
            if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
              pfVar3 = (float *)func_?(pOVar1);
              fVar6 = 0.0;
              fVar7 = MVMath::MVMath_TryValidateFloat(*pfVar3,(MethodInfo *)0x0);
              __return_storage_ptr__->x = fVar4;
              __return_storage_ptr__->y = fVar5;
              __return_storage_ptr__->z = fVar6;
              __return_storage_ptr__->w = fVar7;
              return __return_storage_ptr__;
            }
            goto code_?;
          }
        }
      }
    }
  }
  uVar2 = func_?();
code_?:
  func_?(uVar2);
  pcVar8 = (code *)swi(3);
  pQVar9 = (Quaternion *)(*pcVar8)();
  return pQVar9;
}


/* Vector3 GetScale(IScale) */

Vector3 * MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetScale
                    (Vector3 *__return_storage_ptr__,IScale *scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IScale);
    cRam_? = '\x01';
  }
  if (scale != (IScale *)0x0) {
    fVar1 = (float10)func_?(0,TypeInfo__MV__WorldObject__IScale,scale);
    fVar2 = MVMath::MVMath_TryValidateFloat((float)fVar1,(MethodInfo *)0x0);
    fVar1 = (float10)func_?(2,TypeInfo__MV__WorldObject__IScale,scale);
    fVar3 = MVMath::MVMath_TryValidateFloat((float)fVar1,(MethodInfo *)0x0);
    fVar1 = (float10)func_?(4,TypeInfo__MV__WorldObject__IScale,fVar3,fVar2);
    fVar2 = (float)fVar1;
    puVar4 = &UNK_?;
    fVar3 = MVMath::MVMath_TryValidateFloat(fVar2,(MethodInfo *)0x0);
    __return_storage_ptr__->x = fVar2;
    __return_storage_ptr__->y = (float)puVar4;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Vector3 GetScale(Dictionary`2[System.Byte,System.Object]) */

Vector3 * MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetScale_1
                    (Vector3 *__return_storage_ptr__,
                    Dictionary_2_System_Byte_System_Object_ *scaleData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                   );
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if (scaleData != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)scaleData,0x1f,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar3 = (float *)func_?(pOVar1);
      fVar4 = MVMath::MVMath_TryValidateFloat(*pfVar3,(MethodInfo *)0x0);
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)scaleData,0x20,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                         );
      uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar3 = (float *)func_?(pOVar1);
        MVMath::MVMath_TryValidateFloat(*pfVar3,(MethodInfo *)0x0);
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)scaleData,0x21,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
        if (pOVar1 != (Object *)0x0) {
          if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
            pfVar3 = (float *)func_?(pOVar1);
            fVar5 = 0.0;
            fVar6 = MVMath::MVMath_TryValidateFloat(*pfVar3,(MethodInfo *)0x0);
            __return_storage_ptr__->x = fVar4;
            __return_storage_ptr__->y = fVar5;
            __return_storage_ptr__->z = fVar6;
            return __return_storage_ptr__;
          }
          goto code_?;
        }
      }
    }
  }
  uVar2 = func_?();
code_?:
  func_?(uVar2);
  pcVar7 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar7)();
  return pVVar8;
}


/* Void SetPosition(Vector3, IPosition) */

void MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
               (Vector3 position,IPosition *positionObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IPosition);
    cRam_? = '\x01';
  }
  fVar1 = MVMath::MVMath_TryValidateFloat(position.x,(MethodInfo *)0x0);
  if (positionObject != (IPosition *)0x0) {
    func_?(1,TypeInfo__MV__WorldObject__IPosition,positionObject,fVar1);
    MVMath::MVMath_TryValidateFloat(position.y,(MethodInfo *)0x0);
    func_?(3,TypeInfo__MV__WorldObject__IPosition,positionObject);
    MVMath::MVMath_TryValidateFloat(position.z,(MethodInfo *)0x0);
    func_?(5);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetPosition(Vector3, Dictionary`2[System.Byte,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition_1
               (Vector3 position,Dictionary_2_System_Byte_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  MVMath::MVMath_TryValidateFloat(position.x,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff8);
  if (data != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)data,(Object *)0x18,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    MVMath::MVMath_TryValidateFloat(position.y,(MethodInfo *)0x0);
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)data,(Object *)0x19,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    MVMath::MVMath_TryValidateFloat(position.z,(MethodInfo *)0x0);
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)data,(Object *)0x1a,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetRotation(Quaternion, IRotation) */

void MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation
               (Quaternion rotation,IRotation *rotationObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IRotation);
    cRam_? = '\x01';
  }
  fVar1 = MVMath::MVMath_TryValidateFloat(rotation.x,(MethodInfo *)0x0);
  if (rotationObject != (IRotation *)0x0) {
    func_?(1,TypeInfo__MV__WorldObject__IRotation,rotationObject,fVar1);
    MVMath::MVMath_TryValidateFloat(rotation.y,(MethodInfo *)0x0);
    func_?(3,TypeInfo__MV__WorldObject__IRotation,rotationObject);
    MVMath::MVMath_TryValidateFloat(rotation.z,(MethodInfo *)0x0);
    func_?(5);
    MVMath::MVMath_TryValidateFloat(rotation.w,(MethodInfo *)0x0);
    func_?();
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetRotation(Quaternion, Dictionary`2[System.Byte,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation_1
               (Quaternion rotation,Dictionary_2_System_Byte_System_Object_ *data,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  MVMath::MVMath_TryValidateFloat(rotation.x,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff8);
  if (data != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)data,(Object *)0x1b,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    MVMath::MVMath_TryValidateFloat(rotation.y,(MethodInfo *)0x0);
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)data,(Object *)0x1c,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    MVMath::MVMath_TryValidateFloat(rotation.z,(MethodInfo *)0x0);
    f = TypeInfo__System__Single;
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)data,(Object *)0x1d,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    MVMath::MVMath_TryValidateFloat((float)f,(MethodInfo *)0x0);
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)data,(Object *)0x1e,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetScale(Vector3, IScale) */

void MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetScale
               (Vector3 scale,IScale *scaleObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IScale);
    cRam_? = '\x01';
  }
  fVar1 = MVMath::MVMath_TryValidateFloat(scale.x,(MethodInfo *)0x0);
  if (scaleObject != (IScale *)0x0) {
    func_?(1,TypeInfo__MV__WorldObject__IScale,scaleObject,fVar1);
    MVMath::MVMath_TryValidateFloat(scale.y,(MethodInfo *)0x0);
    func_?(3,TypeInfo__MV__WorldObject__IScale,scaleObject);
    MVMath::MVMath_TryValidateFloat(scale.z,(MethodInfo *)0x0);
    func_?(5);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetScale(Vector3, Dictionary`2[System.Byte,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetScale_1
               (Vector3 scale,Dictionary_2_System_Byte_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  MVMath::MVMath_TryValidateFloat(scale.x,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff8);
  if (data != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)data,(Object *)0x1f,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    MVMath::MVMath_TryValidateFloat(scale.y,(MethodInfo *)0x0);
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)data,(Object *)0x20,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    MVMath::MVMath_TryValidateFloat(scale.z,(MethodInfo *)0x0);
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)data,(Object *)0x21,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

