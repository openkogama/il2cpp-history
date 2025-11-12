
/* Boolean ContainsScaleDragAxisIndex(Int32) */

bool Assembly-CSharp.dll::RTG::GizmoScalerHandle::GizmoScalerHandle_ContainsScaleDragAxisIndex
               (GizmoScalerHandle *this,int32_t scaleDragAxisIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._scaleDragAxisIndices;
  if (pLVar1 != (List_1_System_Int32_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return 0;
    }
    iVar2 = FUN_?(pLVar1,scaleDragAxisIndex,
                          MethodInfo__System__Collections__Generic__List<int>__Contains_int_->klass
                          ->rgctx_data[0x17].rgctxDataDummy);
    return iVar2 != -1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* GizmoScalerHandle(Int32, IEnumerable`1[System.Int32]) */

void Assembly-CSharp.dll::RTG::GizmoScalerHandle::GizmoScalerHandle__ctor
               (GizmoScalerHandle *this,int32_t handleId,
               IEnumerable_1_System_Int32_ *scaleDragAxisIndices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(pLVar1,MethodInfo__System__Collections__Generic__List<int>__List__);
  bVar2 = iRam_? != 0;
  (this->fields)._scaleDragAxisIndices = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._scaleDragAxisIndices >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  (this->fields)._handleId = handleId;
  pLVar1 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::List_1_System_Int32___ctor_1
            (pLVar1,scaleDragAxisIndices,
             MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
            );
  bVar2 = iRam_? != 0;
  (this->fields)._scaleDragAxisIndices = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._scaleDragAxisIndices >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}


/* List`1[System.Int32] get_ScaleDragAxisIndices() */

List_1_System_Int32_ *
Assembly-CSharp.dll::RTG::GizmoScalerHandle::GizmoScalerHandle_get_ScaleDragAxisIndices
          (GizmoScalerHandle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  collection = (this->fields)._scaleDragAxisIndices;
  this_00 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>)
  ;
  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::List_1_System_Int32___ctor_1
            (this_00,(IEnumerable_1_System_Int32_ *)collection,
             MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
            );
  return this_00;
}

