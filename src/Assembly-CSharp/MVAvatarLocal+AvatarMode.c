
/* Void SetModeTypes() */

void Assembly-CSharp.dll::MVAvatarLocal+AvatarMode::MVAvatarLocal_AvatarMode_SetModeTypes
               (MVAvatarLocal_AvatarMode *this,MethodInfo *method)

{
  pMVar1 = (this->fields).mvAvatar;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    pMVar2 = (pMVar1->fields)._.SpawnRoleModeTypes;
    aiStackX_8[0] = (this->fields).modeTypes;
    pOVar3 = (Object *)FUN_?(uRam_?,aiStackX_8);
    if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
      pOVar4 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                          (pOVar3,(MethodInfo *)0x0);
      bVar5 = iRam_? != 0;
      pOVar3 = (pMVar2->fields).value;
      (pMVar2->fields).value = pOVar4;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(pMVar2->fields).value >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
      if (pOVar3 != pOVar4) {
        if ((pMVar2->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          pMVar10 = (pMVar2->fields).OnChange;
          pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                             ((pMVar2->fields).value,(MethodInfo *)0x0);
          (*(pMVar10->fields)._._.invoke_impl)
                    ((pMVar10->fields)._._.method_code,pOVar3,(pMVar10->fields)._._.method);
        }
        if (((pMVar2->fields).writeThrough != 0) &&
           ((pMVar2->fields).OnWriteThrough != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0))
        {
          pMVar11 = (pMVar2->fields).OnWriteThrough;
          pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                             ((pMVar2->fields).value,(MethodInfo *)0x0);
          (*(pMVar11->fields)._._.invoke_impl)
                    ((pMVar11->fields)._._.method_code,pOVar3,(pMVar11->fields)._._.method);
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

