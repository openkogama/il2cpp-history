
/* Vector3 AdjustMoveVector(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
          ObjectTransformGizmo_ObjectRestrictions_AdjustMoveVector
                    (Vector3 *__return_storage_ptr__,ObjectTransformGizmo_ObjectRestrictions *this,
                    Vector3 moveVector,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  __return_storage_ptr__->x = moveVector.x;
  __return_storage_ptr__->y = moveVector.y;
  __return_storage_ptr__->z = moveVector.z;
  pBVar2 = (this->fields)._moveAxesMask;
  if (pBVar2 != (Boolean__Array *)0x0) {
    if (pBVar2->max_length != 0) {
      if (pBVar2->vector[0] == 0) {
        __return_storage_ptr__->x = 0.0;
      }
      if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
      if (1 < pBVar2->max_length) {
        if (pBVar2->vector[1] == 0) {
          __return_storage_ptr__->y = 0.0;
        }
        if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
        if (2 < pBVar2->max_length) {
          if (pBVar2->vector[2] == 0) {
            __return_storage_ptr__->z = 0.0;
          }
          return __return_storage_ptr__;
        }
      }
    }
    puStack_1 = (undefined1 *)0x0;
    puStack_3 = (undefined *)func_?();
    func_?();
    pcVar4 = (code *)swi(3);
    pVVar5 = (Vector3 *)(*pcVar4)();
    return pVVar5;
  }
code_?:
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Vector3 AdjustScaleVector(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
          ObjectTransformGizmo_ObjectRestrictions_AdjustScaleVector
                    (Vector3 *__return_storage_ptr__,ObjectTransformGizmo_ObjectRestrictions *this,
                    Vector3 scaleVector,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  __return_storage_ptr__->x = scaleVector.x;
  __return_storage_ptr__->y = scaleVector.y;
  __return_storage_ptr__->z = scaleVector.z;
  pBVar2 = (this->fields)._scaleAxesMask;
  if (pBVar2 != (Boolean__Array *)0x0) {
    if (pBVar2->max_length != 0) {
      if (pBVar2->vector[0] == 0) {
        __return_storage_ptr__->x = 1.0;
      }
      if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
      if (1 < pBVar2->max_length) {
        if (pBVar2->vector[1] == 0) {
          __return_storage_ptr__->y = 1.0;
        }
        if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
        if (2 < pBVar2->max_length) {
          if (pBVar2->vector[2] == 0) {
            __return_storage_ptr__->z = 1.0;
          }
          return __return_storage_ptr__;
        }
      }
    }
    puStack_1 = (undefined1 *)0x0;
    puStack_3 = (undefined *)func_?();
    func_?();
    pcVar4 = (code *)swi(3);
    pVVar5 = (Vector3 *)(*pcVar4)();
    return pVVar5;
  }
code_?:
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Boolean CanMoveAlongAllAxes() */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
     ObjectTransformGizmo_ObjectRestrictions_CanMoveAlongAllAxes
               (ObjectTransformGizmo_ObjectRestrictions *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._moveAxesMask;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if (pBVar2->max_length != 0) {
    if (pBVar2->vector[0] == 0) {
      return 0;
    }
    if (1 < pBVar2->max_length) {
      if (pBVar2->vector[1] == 0) {
        return 0;
      }
      if (2 < pBVar2->max_length) {
        return pBVar2->vector[2] != 0;
      }
    }
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean CanMoveAlongAxis(Int32) */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
     ObjectTransformGizmo_ObjectRestrictions_CanMoveAlongAxis
               (ObjectTransformGizmo_ObjectRestrictions *this,int32_t axisIndex,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._moveAxesMask;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if ((uint)axisIndex < pBVar2->max_length) {
    return pBVar2->vector[axisIndex] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean CanScaleAlongAllAxes() */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
     ObjectTransformGizmo_ObjectRestrictions_CanScaleAlongAllAxes
               (ObjectTransformGizmo_ObjectRestrictions *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._scaleAxesMask;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if (pBVar2->max_length != 0) {
    if (pBVar2->vector[0] == 0) {
      return 0;
    }
    if (1 < pBVar2->max_length) {
      if (pBVar2->vector[1] == 0) {
        return 0;
      }
      if (2 < pBVar2->max_length) {
        return pBVar2->vector[2] != 0;
      }
    }
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean CanScaleAlongAxis(Int32) */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
     ObjectTransformGizmo_ObjectRestrictions_CanScaleAlongAxis
               (ObjectTransformGizmo_ObjectRestrictions *this,int32_t axisIndex,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._scaleAxesMask;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if ((uint)axisIndex < pBVar2->max_length) {
    return pBVar2->vector[axisIndex] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsAffectedByHandle(Int32) */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
     ObjectTransformGizmo_ObjectRestrictions_IsAffectedByHandle
               (ObjectTransformGizmo_ObjectRestrictions *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_UInt32_ *)(this->fields)._handleMask;
  if (this_00 != (HashSet_1_System_UInt32_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
            HashSet_1_System_UInt32__Contains
                      (this_00,handleId,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    return bVar1 ^ 1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void SetCanMoveAlongAxis(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
     ObjectTransformGizmo_ObjectRestrictions_SetCanMoveAlongAxis
               (ObjectTransformGizmo_ObjectRestrictions *this,int32_t axisIndex,bool canMove,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._moveAxesMask;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((uint)axisIndex < pBVar2->max_length) {
    pBVar2->vector[axisIndex] = canMove;
    return;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_6 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetCanScaleAlongAxis(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
     ObjectTransformGizmo_ObjectRestrictions_SetCanScaleAlongAxis
               (ObjectTransformGizmo_ObjectRestrictions *this,int32_t axisIndex,bool canScale,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._scaleAxesMask;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((uint)axisIndex < pBVar2->max_length) {
    pBVar2->vector[axisIndex] = canScale;
    return;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_6 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetIsAffectedByHandle(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
     ObjectTransformGizmo_ObjectRestrictions_SetIsAffectedByHandle
               (ObjectTransformGizmo_ObjectRestrictions *this,int32_t handleId,bool isAffected,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_UInt32_ *)(this->fields)._handleMask;
  if (isAffected == 0) {
    if (this_00 != (HashSet_1_System_UInt32_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
      HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                ((HashSet_1_System_Int32_ *)this_00,handleId,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      return;
    }
  }
  else if (this_00 != (HashSet_1_System_UInt32_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
    HashSet_1_System_UInt32__Remove
              (this_00,handleId,MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_)
    ;
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* ObjectTransformGizmo+ObjectRestrictions() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo+ObjectRestrictions::
     ObjectTransformGizmo_ObjectRestrictions__ctor
               (ObjectTransformGizmo_ObjectRestrictions *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&_75C8FD04AD916AEC3E3D5CB76A452B116B3D4D0912A0A485E9FB8E3D240E210C_Field);
    cRam_? = '\x01';
  }
  pBVar1 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,3);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar1,
             __75C8FD04AD916AEC3E3D5CB76A452B116B3D4D0912A0A485E9FB8E3D240E210C_Field,
             (MethodInfo *)0x0);
  (this->fields)._moveAxesMask = pBVar1;
  func_?(&this->fields,pBVar1);
  pBVar1 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,3);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar1,
             __75C8FD04AD916AEC3E3D5CB76A452B116B3D4D0912A0A485E9FB8E3D240E210C_Field,
             (MethodInfo *)0x0);
  (this->fields)._scaleAxesMask = pBVar1;
  func_?(&(this->fields)._scaleAxesMask,pBVar1);
  this_00 = (HashSet_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields)._handleMask = this_00;
  method_00 = (MethodInfo *)&(this->fields)._handleMask;
  pHStack2 = this_00;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

