
/* Void ApplyValue() */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__ApplyValue
               (ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  pMVar2 = method;
  lVar3 = FUN_?();
  lVar3 = -lVar3;
  pvStackX_8 = &stack0xfffffffffffffff8 + lVar3;
  pFVar4 = pMVar2->klass->rgctx_data->klass->fields;
  pIVar5 = pFVar4->parent;
  lVar6 = (longlong)&this->klass + (longlong)pFVar4->offset;
  iVar7._0_2_ = (pIVar5->byval_arg).attrs;
  iVar7._2_1_ = (pIVar5->byval_arg).type;
  iVar7._3_1_ = (pIVar5->byval_arg).field_0xb;
  lVar8 = lVar6 + -0x10;
  if (-1 < iVar7) {
    lVar8 = lVar6;
  }
  *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
  FUN_?(pvStackX_8,lVar8);
  if (-1 < *(int *)&(method->klass->rgctx_data[1].method)->return_type) {
    pvStackX_8 = *(void **)pvStackX_8;
  }
  pTVar9 = this->klass;
  *(void **)((longlong)alStack_10 + lVar3) = pvStackX_8;
  pMVar2 = (pTVar9->vtable).__unknown_2.method;
  pIVar11 = pMVar2->invoker_method;
  pIVar12 = pMVar2->virtualMethodPointer;
  *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
  (*pIVar11)(pIVar12,pMVar2,this,&pvStackX_8,*(void **)((longlong)alStack_10 + lVar3));
  return;
}


/* Void Initialize(SettingsWrapper, String, Int32,
   Action`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Initialize
               (ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               SettingsWrapper *settings,String *key,int32_t groups,
               Action_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *onChange,
               MethodInfo *method)

{
  if (this == (ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ThemeAttribute::ThemeAttribute_Initialize
            ((ThemeAttribute *)this,settings,key,groups,(MethodInfo *)0x0);
  pFVar2 = method->klass->rgctx_data->klass->fields;
  pIVar3 = pFVar2[1].parent;
  puVar4 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar2[1].offset);
  iVar5._0_2_ = (pIVar3->byval_arg).attrs;
  iVar5._2_1_ = (pIVar3->byval_arg).type;
  iVar5._3_1_ = (pIVar3->byval_arg).field_0xb;
  puVar6 = puVar4 + -2;
  if (-1 < iVar5) {
    puVar6 = puVar4;
  }
  bVar7 = iRam_? != 0;
  *puVar6 = onChange;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)puVar6 >> 0xc);
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
  return;
}

