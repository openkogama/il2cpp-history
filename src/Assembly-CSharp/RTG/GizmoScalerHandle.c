
/* Boolean ContainsScaleDragAxisIndex(Int32) */

bool Assembly-CSharp.dll::RTG::GizmoScalerHandle::GizmoScalerHandle_ContainsScaleDragAxisIndex
               (GizmoScalerHandle *this,int32_t scaleDragAxisIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._scaleDragAxisIndices;
  if (this_00 != (List_1_System_Int32_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
            List_1_System_Int32__Contains
                      (this_00,scaleDragAxisIndex,
                       MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* GizmoScalerHandle(Int32, IEnumerable`1[System.Int32]) */

void Assembly-CSharp.dll::RTG::GizmoScalerHandle::GizmoScalerHandle__ctor
               (GizmoScalerHandle *this,int32_t handleId,
               IEnumerable_1_System_Int32_ *scaleDragAxisIndices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Int32_ *)
           func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  ppLVar2 = &(this->fields)._scaleDragAxisIndices;
  *ppLVar2 = pLVar1;
  method_00 = (MethodInfo *)ppLVar2;
  func_?(ppLVar2,pLVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields)._handleId = handleId;
  pLVar1 = (List_1_System_Int32_ *)
           func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::List_1_System_Int32___ctor_1
            (pLVar1,scaleDragAxisIndices,
             MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
            );
  *ppLVar2 = pLVar1;
  func_?(ppLVar2,pLVar1);
  return;
}


/* List`1[System.Int32] get_ScaleDragAxisIndices() */

List_1_System_Int32_ *
Assembly-CSharp.dll::RTG::GizmoScalerHandle::GizmoScalerHandle_get_ScaleDragAxisIndices
          (GizmoScalerHandle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  collection = (this->fields)._scaleDragAxisIndices;
  this_00 = (List_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::List_1_System_Int32___ctor_1
            (this_00,(IEnumerable_1_System_Int32_ *)collection,
             MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
            );
  return this_00;
}

