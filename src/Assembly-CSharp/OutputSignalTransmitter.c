
/* Void Send(Boolean) */

void Assembly-CSharp.dll::OutputSignalTransmitter::OutputSignalTransmitter_Send
               (OutputSignalTransmitter *this,bool isHot,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                   );
    func_?(&TypeInfo__IInputSignalReceiver);
    func_?(&TypeInfo__ILogicWorldObject);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((pMVar4 != (MVWorldObjectClientManager *)0x0) &&
      (pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar4,(this->fields).woId,(MethodInfo *)0x0),
      pMVar5 != (MVWorldObject *)0x0)) &&
     (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (pMVar5->fields).outputLinkRefs,
     this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
              ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               &stack0xffffffc8,this_00,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
              );
    method_00 = (MethodInfo *)0x0;
    uStack_1 = 1;
    while( true ) {
      pMVar6 = 
      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
      ;
      bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                        );
      if (bVar7 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffb8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((pMVar6 == (MethodInfo *)0x0) || (pMVar4 == (MVWorldObjectClientManager *)0x0)) ||
         (pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (pMVar4,(int32_t)pMVar6->klass,(MethodInfo *)0x0),
         pMVar5 == (MVWorldObject *)0x0)) break;
      iVar8 = func_?();
      if (iVar8 == 0) goto code_?;
      piVar9 = (int *)func_?();
      if (piVar9 == (int *)0x0) goto code_?;
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar9 + 0xb6);
      if (uVar11 != 0) {
        do {
          if (*(ILogicWorldObject__Class **)(*(int *)(*piVar9 + 0x58) + (uint)uVar10 * 8) ==
              TypeInfo__ILogicWorldObject) {
            puVar12 = (undefined4 *)
                     (*piVar9 +
                     (*(int *)(*(int *)(*piVar9 + 0x58) + 4 + (uint)uVar10 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar12 = (undefined4 *)func_?();
code_?:
      piVar9 = (int *)(*(code *)*puVar12)();
      if (piVar9 == (int *)0x0) break;
      iVar8 = *piVar9;
      uVar11 = 0;
      if (*(ushort *)(iVar8 + 0xb6) != 0) {
        do {
          if (*(IInputSignalReceiver__Class **)(*(int *)(iVar8 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__IInputSignalReceiver) {
            puVar12 = (undefined4 *)
                     (iVar8 + (*(int *)(*(int *)(iVar8 + 0x58) + 4 + (uint)uVar11 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(ushort *)(iVar8 + 0xb6));
      }
      puVar12 = (undefined4 *)func_?();
code_?:
      iVar8 = puVar12[1];
      method_00 = (MethodInfo *)&UNK_?;
      (*(code *)*puVar12)();
      *(bool *)(iVar8 + 0x14) = isHot;
    }
  }
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

