
/* Vector3 GetPosition(Dictionary`2[System.Byte,System.Object]) */

Vector3 * MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                    (Vector3 *__return_storage_ptr__,
                    Dictionary_2_System_Byte_System_Object_ *positionData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (positionData != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (positionData,0x18,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar3 = (float *)func_?(pOVar1);
      MVMath::MVMath_TryValidateFloat(*pfVar3,(MethodInfo *)0x0);
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
               ::Dictionary_2_System_Byte_System_Object__get_Item
                         (positionData,0x19,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                         );
      uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar3 = (float *)func_?(pOVar1);
        MVMath::MVMath_TryValidateFloat(*pfVar3,(MethodInfo *)0x0);
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__get_Item
                           (positionData,0x1a,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
        if (pOVar1 != (Object *)0x0) {
          if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
            pfVar3 = (float *)func_?(pOVar1);
            f = *pfVar3;
            uVar4 = 0;
            fVar5 = MVMath::MVMath_TryValidateFloat(f,(MethodInfo *)0x0);
            __return_storage_ptr__->x = 0.0;
            __return_storage_ptr__->y = 0.0;
            __return_storage_ptr__->z = 0.0;
            func_?(__return_storage_ptr__,f,uVar4,fVar5);
            return __return_storage_ptr__;
          }
          goto code_?;
        }
      }
    }
  }
  uVar2 = func_?(0);
code_?:
  func_?(uVar2);
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}


/* Quaternion GetRotation(Dictionary`2[System.Byte,System.Object]) */

Quaternion *
MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
          (Quaternion *__return_storage_ptr__,Dictionary_2_System_Byte_System_Object_ *rotationData,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (rotationData != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (rotationData,0x1b,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar3 = (float *)func_?(pOVar1);
      MVMath::MVMath_TryValidateFloat(*pfVar3,(MethodInfo *)0x0);
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
               ::Dictionary_2_System_Byte_System_Object__get_Item
                         (rotationData,0x1c,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                         );
      uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar3 = (float *)func_?(pOVar1);
        MVMath::MVMath_TryValidateFloat(*pfVar3,(MethodInfo *)0x0);
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__get_Item
                           (rotationData,0x1d,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
        if (pOVar1 != (Object *)0x0) {
          if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
          goto code_?;
          pfVar3 = (float *)func_?(pOVar1);
          fVar4 = MVMath::MVMath_TryValidateFloat(*pfVar3,(MethodInfo *)0x0);
          pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                   Object]::Dictionary_2_System_Byte_System_Object__get_Item
                             (rotationData,0x1e,
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                             );
          uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
          if (pOVar1 != (Object *)0x0) {
            if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
              pfVar3 = (float *)func_?(pOVar1,fVar4);
              fVar4 = MVMath::MVMath_TryValidateFloat(*pfVar3,(MethodInfo *)0x0);
              __return_storage_ptr__->x = 0.0;
              __return_storage_ptr__->y = 0.0;
              __return_storage_ptr__->z = 0.0;
              __return_storage_ptr__->w = 0.0;
              func_?(__return_storage_ptr__,fVar4);
              return __return_storage_ptr__;
            }
            goto code_?;
          }
        }
      }
    }
  }
  uVar2 = func_?(0);
code_?:
  func_?(uVar2);
  pcVar5 = (code *)swi(3);
  pQVar6 = (Quaternion *)(*pcVar5)();
  return pQVar6;
}


/* Void SetPosition(Vector3, Dictionary`2[System.Byte,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
               (Vector3 position,Dictionary_2_System_Byte_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVMath::MVMath_TryValidateFloat(position.x,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff8);
  if (data != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (data,0x18,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    MVMath::MVMath_TryValidateFloat(position.y,(MethodInfo *)0x0);
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (data,0x19,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    MVMath::MVMath_TryValidateFloat(position.z,(MethodInfo *)0x0);
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (data,0x1a,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetRotation(Quaternion, Dictionary`2[System.Byte,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation
               (Quaternion rotation,Dictionary_2_System_Byte_System_Object_ *data,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVMath::MVMath_TryValidateFloat(rotation.x,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff8);
  if (data != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (data,0x1b,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    MVMath::MVMath_TryValidateFloat(rotation.y,(MethodInfo *)0x0);
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (data,0x1c,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    MVMath::MVMath_TryValidateFloat(rotation.z,(MethodInfo *)0x0);
    f = TypeInfo__System__Single;
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (data,0x1d,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    MVMath::MVMath_TryValidateFloat((float)f,(MethodInfo *)0x0);
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (data,0x1e,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetScale(Vector3, Dictionary`2[System.Byte,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetScale
               (Vector3 scale,Dictionary_2_System_Byte_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVMath::MVMath_TryValidateFloat(scale.x,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff8);
  if (data != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (data,0x1f,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    MVMath::MVMath_TryValidateFloat(scale.y,(MethodInfo *)0x0);
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (data,0x20,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    MVMath::MVMath_TryValidateFloat(scale.z,(MethodInfo *)0x0);
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (data,0x21,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

