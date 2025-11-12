
/* Boolean IsInMode(SpawnRoleModeType) */

bool Assembly-CSharp.dll::SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
               (SpawnRoleModeTypeWrapper *this,SpawnRoleModeType__Enum t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRoleType;
  if ((pSVar1 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
     (pSVar2 = (pSVar1->fields).subscribableVariable,
     pSVar2 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
    return 0 < (int)((pSVar2->fields)._.value & t);
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* SpawnRoleModeTypeWrapper(SpawnRoleVariable`1[MV.Common.SpawnRoleModeType]) */

void Assembly-CSharp.dll::SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper__ctor
               (SpawnRoleModeTypeWrapper *this,
               SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *spawnRoleType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__SpawnRoleModeTypeWrapper__OnChangeInternal_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).spawnRoleType = spawnRoleType;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  b = (Delegate *)
      FUN_?(
                   TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                   );
  FUN_?(b,this);
  pMVar6 = 
  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
  ;
  if (spawnRoleType == (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ppSVar8 = &(spawnRoleType->fields).OnChange;
  a = (spawnRoleType->fields).OnChange;
  do {
    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)a,b,(MethodInfo *)0x0);
    pvVar10 = pMVar6->klass->rgctx_data[6].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar10 + 0x135) & 1) == 0) {
      pvVar10 = (void *)FUN_?();
    }
    if (pDVar9 == (Delegate *)0x0) {
      pSVar11 = (SpawnRoleVariable_1_T_SubDelegate_MV_Common_SpawnRoleModeType_ *)0x0;
    }
    else {
      pSVar11 = (SpawnRoleVariable_1_T_SubDelegate_MV_Common_SpawnRoleModeType_ *)
               FUN_?(pDVar9,pvVar10);
      if (pSVar11 == (SpawnRoleVariable_1_T_SubDelegate_MV_Common_SpawnRoleModeType_ *)0x0) {
        FUN_?(pDVar9,pvVar10);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    LOCK();
    pSVar12 = *ppSVar8;
    bVar1 = a == pSVar12;
    if (bVar1) {
      *ppSVar8 = pSVar11;
      pSVar12 = a;
    }
    UNLOCK();
    pSVar11 = a;
    if (!bVar1) {
      pSVar11 = pSVar12;
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)ppSVar8 >> 0xc);
      uVar5 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar3 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar3;
        if (bVar1) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    bVar1 = pSVar11 != a;
    a = pSVar11;
  } while (bVar1);
  return;
}


/* Void add_OnChange(Action`1[MV.Common.SpawnRoleModeType]) */

void Assembly-CSharp.dll::SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
               (SpawnRoleModeTypeWrapper *this,Action_1_MV_Common_SpawnRoleModeType_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnChange;
  a = (this->fields).OnChange;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<MV::Common::SpawnRoleModeType>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_MV_Common_SpawnRoleModeType_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_MV_Common_SpawnRoleModeType_ *)
               FUN_?(pDVar2,TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
      if (pAVar4 == (Action_1_MV_Common_SpawnRoleModeType_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = a == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
  } while (bVar7);
  return;
}


/* Void remove_OnChange(Action`1[MV.Common.SpawnRoleModeType]) */

void Assembly-CSharp.dll::SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
               (SpawnRoleModeTypeWrapper *this,Action_1_MV_Common_SpawnRoleModeType_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnChange;
  source = (this->fields).OnChange;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<MV::Common::SpawnRoleModeType>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_MV_Common_SpawnRoleModeType_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_MV_Common_SpawnRoleModeType_ *)
               FUN_?(pDVar2,TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
      if (pAVar4 == (Action_1_MV_Common_SpawnRoleModeType_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = source == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
  } while (bVar7);
  return;
}

