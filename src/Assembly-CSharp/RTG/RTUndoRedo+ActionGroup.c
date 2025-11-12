
/* RTUndoRedo+ActionGroup(IUndoRedoAction) */

void Assembly-CSharp.dll::RTG::RTUndoRedo+ActionGroup::RTUndoRedo_ActionGroup__ctor
               (RTUndoRedo_ActionGroup *this,IUndoRedoAction *action,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__Add_RTG__IUndoRedoAction_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_RTG_IUndoRedoAction_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).Actions = pLVar1;
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
  pMVar7 = 
  MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__Add_RTG__IUndoRedoAction_;
  pLVar1 = (this->fields).Actions;
  if (pLVar1 != (List_1_RTG_IUndoRedoAction_ *)0x0) {
    piVar8 = &(pLVar1->fields)._version;
    *piVar8 = *piVar8 + 1;
    pIVar9 = (pLVar1->fields)._items;
    if (pIVar9 != (IUndoRedoAction__Array *)0x0) {
      uVar3 = (pLVar1->fields)._size;
      if (uVar3 < (uint)pIVar9->max_length) {
        (pLVar1->fields)._size = uVar3 + 1;
      }
      else {
        uVar3 = (pLVar1->fields)._size;
        FUN_?(pLVar1,uVar3 + 1,
                      (pMVar7->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy
                      ,pIVar9,unaff_RDI);
        pIVar9 = (pLVar1->fields)._items;
        (pLVar1->fields)._size = uVar3 + 1;
        if (pIVar9 == (IUndoRedoAction__Array *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if ((uint)pIVar9->max_length <= uVar3) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      bVar2 = iRam_? != 0;
      pIVar9->vector[(int)uVar3] = action;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)(pIVar9->vector + (int)uVar3) >> 0xc);
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
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

