
/* Vector3 GetPosition(Dictionary`2[System.Byte,System.Object]) */

Vector3 * MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
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
  if (positionData == (Dictionary_2_System_Byte_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (positionData,0x18,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar3 = (float *)func_?(pOVar1);
    fVar4 = *pfVar3;
    if ((ABS(fVar4) != INFINITY) && ((uint)ABS(fVar4) < 0x7f800001)) {
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
               ::Dictionary_2_System_Byte_System_Object__get_Item
                         (positionData,0x19,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                         );
      uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
      if (pOVar1 == (Object *)0x0) goto code_?;
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      puVar5 = (uint *)func_?(pOVar1);
      if (((*puVar5 & 0x7fffffff) != 0x7f800000) && ((*puVar5 & 0x7fffffff) < 0x7f800001)) {
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__get_Item
                           (positionData,0x1a,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
        if (pOVar1 == (Object *)0x0) goto code_?;
        if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar3 = (float *)func_?();
        fVar6 = *pfVar3;
        if ((ABS(fVar6) != INFINITY) && ((uint)ABS(fVar6) < 0x7f800001)) {
          __return_storage_ptr__->x = fVar4;
          __return_storage_ptr__->y = (float)pOVar1;
          __return_storage_ptr__->z = fVar6;
          return __return_storage_ptr__;
        }
      }
    }
  }
  uVar7 = func_?(&TypeInfo__MV__WorldObject__InvalidFloatException);
  this = (InvalidFloatException *)func_?(uVar7);
  InvalidFloatException::InvalidFloatException__ctor(this,(MethodInfo *)0x0);
  uVar7 = func_?(&MethodInfo__MV__WorldObject__MVMath__TryValidateFloat_float_);
  uVar2 = func_?(this,uVar7);
code_?:
  func_?(uVar2);
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar8)();
  return pVVar9;
}


/* Quaternion GetRotation(Dictionary`2[System.Byte,System.Object]) */

Quaternion *
MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
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
  if (rotationData == (Dictionary_2_System_Byte_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (rotationData,0x1b,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar3 = (float *)func_?(pOVar1);
    fVar4 = *pfVar3;
    if ((ABS(fVar4) != INFINITY) && ((uint)ABS(fVar4) < 0x7f800001)) {
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
               ::Dictionary_2_System_Byte_System_Object__get_Item
                         (rotationData,0x1c,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                         );
      uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
      if (pOVar1 == (Object *)0x0) goto code_?;
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar3 = (float *)func_?(pOVar1);
      fVar5 = *pfVar3;
      if ((ABS(fVar5) != INFINITY) && ((uint)ABS(fVar5) < 0x7f800001)) {
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__get_Item
                           (rotationData,0x1d,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
        if (pOVar1 == (Object *)0x0) goto code_?;
        if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        puVar6 = (uint *)func_?(pOVar1);
        if (((*puVar6 & 0x7fffffff) != 0x7f800000) && ((*puVar6 & 0x7fffffff) < 0x7f800001)) {
          pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                   Object]::Dictionary_2_System_Byte_System_Object__get_Item
                             (rotationData,0x1e,
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                             );
          uVar2 = CONCAT44(TypeInfo__System__Single,pOVar1);
          if (pOVar1 == (Object *)0x0) goto code_?;
          if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
          goto code_?;
          pfVar3 = (float *)func_?();
          fVar7 = *pfVar3;
          if ((ABS(fVar7) != INFINITY) && ((uint)ABS(fVar7) < 0x7f800001)) {
            __return_storage_ptr__->x = fVar4;
            __return_storage_ptr__->y = fVar5;
            __return_storage_ptr__->z = (float)pOVar1;
            __return_storage_ptr__->w = fVar7;
            return __return_storage_ptr__;
          }
        }
      }
    }
  }
  uVar8 = func_?(&TypeInfo__MV__WorldObject__InvalidFloatException);
  this = (InvalidFloatException *)func_?(uVar8);
  InvalidFloatException::InvalidFloatException__ctor(this,(MethodInfo *)0x0);
  uVar8 = func_?(&MethodInfo__MV__WorldObject__MVMath__TryValidateFloat_float_);
  uVar2 = func_?(this,uVar8);
code_?:
  func_?(uVar2);
  pcVar9 = (code *)swi(3);
  pQVar10 = (Quaternion *)(*pcVar9)();
  return pQVar10;
}


/* Void SetPosition(Vector3, Dictionary`2[System.Byte,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
               (Vector3 position,Dictionary_2_System_Byte_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  fStack_1 = position.x;
  if ((ABS(position.x) != INFINITY) && ((uint)ABS(position.x) < 0x7f800001)) {
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_1);
    if (data == (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      func_?();
    }
    else {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (data,0x18,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      if ((ABS(position.y) != INFINITY) && ((uint)ABS(position.y) < 0x7f800001)) {
        fStack_3 = position.y;
        pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_3);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__Add
                  (data,0x19,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  );
        if ((ABS(position.z) != INFINITY) && ((uint)ABS(position.z) < 0x7f800001)) {
          fStack_4 = position.z;
          pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_4);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__Add
                    (data,0x1a,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    );
          return;
        }
      }
    }
  }
  uVar5 = func_?(&TypeInfo__MV__WorldObject__InvalidFloatException);
  this = (InvalidFloatException *)func_?(uVar5);
  InvalidFloatException::InvalidFloatException__ctor(this,(MethodInfo *)0x0);
  fStack_4 = (float)func_?(&MethodInfo__MV__WorldObject__MVMath__TryValidateFloat_float_);
  func_?(this);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetRotation(Quaternion, Dictionary`2[System.Byte,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation
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
  fStack_1 = rotation.x;
  if ((ABS(rotation.x) != INFINITY) && ((uint)ABS(rotation.x) < 0x7f800001)) {
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_1);
    if (data == (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      func_?();
    }
    else {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (data,0x1b,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      if ((ABS(rotation.y) != INFINITY) && ((uint)ABS(rotation.y) < 0x7f800001)) {
        fStack_3 = rotation.y;
        pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_3);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__Add
                  (data,0x1c,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  );
        if ((ABS(rotation.z) != INFINITY) && ((uint)ABS(rotation.z) < 0x7f800001)) {
          fStack_4 = rotation.z;
          pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_4);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__Add
                    (data,0x1d,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    );
          if ((ABS(rotation.w) != INFINITY) && ((uint)ABS(rotation.w) < 0x7f800001)) {
            fStack_5 = rotation.w;
            pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_5);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__Add
                      (data,0x1e,pOVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      );
            return;
          }
        }
      }
    }
  }
  uVar6 = func_?(&TypeInfo__MV__WorldObject__InvalidFloatException);
  this = (InvalidFloatException *)func_?(uVar6);
  InvalidFloatException::InvalidFloatException__ctor(this,(MethodInfo *)0x0);
  fStack_5 = (float)func_?(&MethodInfo__MV__WorldObject__MVMath__TryValidateFloat_float_);
  func_?(this);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetScale(Vector3, Dictionary`2[System.Byte,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetScale
               (Vector3 scale,Dictionary_2_System_Byte_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  fStack_1 = scale.x;
  if ((ABS(scale.x) != INFINITY) && ((uint)ABS(scale.x) < 0x7f800001)) {
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_1);
    if (data == (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      func_?();
    }
    else {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (data,0x1f,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      if ((ABS(scale.y) != INFINITY) && ((uint)ABS(scale.y) < 0x7f800001)) {
        fStack_3 = scale.y;
        pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_3);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__Add
                  (data,0x20,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  );
        if ((ABS(scale.z) != INFINITY) && ((uint)ABS(scale.z) < 0x7f800001)) {
          fStack_4 = scale.z;
          pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_4);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__Add
                    (data,0x21,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    );
          return;
        }
      }
    }
  }
  uVar5 = func_?(&TypeInfo__MV__WorldObject__InvalidFloatException);
  this = (InvalidFloatException *)func_?(uVar5);
  InvalidFloatException::InvalidFloatException__ctor(this,(MethodInfo *)0x0);
  fStack_4 = (float)func_?(&MethodInfo__MV__WorldObject__MVMath__TryValidateFloat_float_);
  func_?(this);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

