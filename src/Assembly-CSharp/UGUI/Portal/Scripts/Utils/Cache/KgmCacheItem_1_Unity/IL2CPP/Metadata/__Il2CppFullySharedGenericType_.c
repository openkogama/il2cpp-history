
/* Boolean IsExpired(Single) */

bool Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::KgmCacheItem`1[Unity::IL2CPP::
     Metadata::__Il2CppFullySharedGenericType]::
     KgmCacheItem_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__IsExpired
               (KgmCacheItem_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,float time,
               MethodInfo *method)

{
  pFVar1 = (method->klass->rgctx_data[1].klass)->fields;
  pIVar2 = pFVar1[2].parent;
  pfVar3 = (float *)((longlong)&this->klass + (longlong)pFVar1[2].offset);
  iVar4._0_2_ = (pIVar2->byval_arg).attrs;
  iVar4._2_1_ = (pIVar2->byval_arg).type;
  iVar4._3_1_ = (pIVar2->byval_arg).field_0xb;
  pfVar5 = pfVar3 + -4;
  if (-1 < iVar4) {
    pfVar5 = pfVar3;
  }
  pFVar1 = (method->klass->rgctx_data[1].klass)->fields;
  pIVar2 = pFVar1[1].parent;
  piVar6 = (int *)((longlong)&this->klass + (longlong)pFVar1[1].offset);
  iVar7._0_2_ = (pIVar2->byval_arg).attrs;
  iVar7._2_1_ = (pIVar2->byval_arg).type;
  iVar7._3_1_ = (pIVar2->byval_arg).field_0xb;
  piVar8 = piVar6 + -4;
  if (-1 < iVar7) {
    piVar8 = piVar6;
  }
  return (float)*piVar8 + *pfVar5 <= time;
}


/* KgmCacheItem`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]
   Update(__Il2CppFullySharedGenericType, Int32) */

KgmCacheItem_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::KgmCacheItem`1[Unity::IL2CPP::Metadata::
__Il2CppFullySharedGenericType]::
KgmCacheItem_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Update
          (KgmCacheItem_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          _Il2CppFullySharedGenericType *value,int32_t expirationSeconds,MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)value;
  lVar2 = FUN_?();
  lVar2 = -lVar2;
  p_Var13 = (_Il2CppFullySharedGenericType__Class *)(&stack0xffffffffffffffe8 + lVar2);
  p_Var11 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
  if (*(int *)&method->klass->rgctx_data->method->return_type < 0) {
    p_Var11 = value;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?(p_Var13,p_Var11);
  if (-1 < *(int *)&method->klass->rgctx_data->method->return_type) {
    p_Var13 = (_Il2CppFullySharedGenericType__Class *)(p_Var13->_0).image;
  }
  pIVar3 = method->klass;
  *(_Il2CppFullySharedGenericType__Class **)((longlong)alStack_4 + lVar2) = p_Var13;
  pMVar5 = pIVar3->rgctx_data[2].method;
  pIVar6 = pMVar5->invoker_method;
  pIVar7 = pMVar5->methodPointer;
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  p_StackX_10 = p_Var13;
  (*pIVar6)(pIVar7,pMVar5,this,&p_StackX_10,*(void **)((longlong)alStack_4 + lVar2));
  pFVar8 = (method->klass->rgctx_data[1].klass)->fields;
  pIVar3 = pFVar8[1].parent;
  piVar9 = (int32_t *)((longlong)&this->klass + (longlong)pFVar8[1].offset);
  iVar10._0_2_ = (pIVar3->byval_arg).attrs;
  iVar10._2_1_ = (pIVar3->byval_arg).type;
  iVar10._3_1_ = (pIVar3->byval_arg).field_0xb;
  piVar11 = piVar9 + -4;
  if (-1 < iVar10) {
    piVar11 = piVar9;
  }
  bVar12 = iRam_? != 0;
  *piVar11 = expirationSeconds;
  if (bVar12) {
    uVar13 = (uint)((ulonglong)piVar11 >> 0xc);
    uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
    do {
      uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
      puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
      LOCK();
      bVar12 = uVar15 == *puVar16;
      if (bVar12) {
        *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
      }
      UNLOCK();
    } while (!bVar12);
  }
  return this;
}


/* KgmCacheItem`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]
   Update(__Il2CppFullySharedGenericType, Int32, Single) */

KgmCacheItem_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::KgmCacheItem`1[Unity::IL2CPP::Metadata::
__Il2CppFullySharedGenericType]::
KgmCacheItem_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Update_1
          (KgmCacheItem_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          _Il2CppFullySharedGenericType *value,int32_t expirationSeconds,float t,MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  _StackX_10.klass = (_Il2CppFullySharedGenericType__Class *)value;
  lVar2 = FUN_?();
  lVar2 = -lVar2;
  plVar3 = (longlong *)((longlong)&pvStack_4 + lVar2);
  p_Var7 = &_StackX_10;
  if (*(int *)&method->klass->rgctx_data->method->return_type < 0) {
    p_Var7 = value;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?(plVar3,p_Var7);
  if (-1 < *(int *)&method->klass->rgctx_data->method->return_type) {
    plVar3 = (longlong *)*plVar3;
  }
  pIVar5 = method->klass;
  *(_Il2CppFullySharedGenericType **)((longlong)alStack_6 + lVar2) = &_StackX_10;
  pvStack_4 = plVar3;
  ppMStack_7 = &_StackX_10.monitor;
  pMVar8 = pIVar5->rgctx_data[3].method;
  pIVar9 = pMVar8->invoker_method;
  pIVar10 = (method->klass->rgctx_data[3].method)->methodPointer;
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  _StackX_10.monitor._0_4_ = expirationSeconds;
  (*pIVar9)(pIVar10,pMVar8,this,&pvStack_4,*(void **)((longlong)alStack_6 + lVar2));
  pFVar11 = (method->klass->rgctx_data[1].klass)->fields;
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  func_?(this,pFVar11 + 2,t);
  return this;
}


/* KgmCacheItem`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](__Il2CppFullySharedGenericType,
   Int32, Single) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::KgmCacheItem`1[Unity::IL2CPP::
     Metadata::__Il2CppFullySharedGenericType]::
     KgmCacheItem_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (KgmCacheItem_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *i,int32_t e,float t,MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)i;
  lVar2 = FUN_?();
  lVar2 = -lVar2;
  p_Var13 = (_Il2CppFullySharedGenericType__Class *)(auStack_3 + lVar2);
  p_Var10 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
  if (*(int *)&method->klass->rgctx_data->method->return_type < 0) {
    p_Var10 = i;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?(p_Var13,p_Var10);
  if (-1 < *(int *)&method->klass->rgctx_data->method->return_type) {
    p_Var13 = (_Il2CppFullySharedGenericType__Class *)(p_Var13->_0).image;
  }
  pIVar4 = method->klass;
  *(_Il2CppFullySharedGenericType__Class **)((longlong)alStack_5 + lVar2) = p_Var13;
  pMVar6 = pIVar4->rgctx_data[2].method;
  pIVar7 = pMVar6->invoker_method;
  pIVar8 = pMVar6->methodPointer;
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  p_StackX_10 = p_Var13;
  (*pIVar7)(pIVar8,pMVar6,this,&p_StackX_10,*(void **)((longlong)alStack_5 + lVar2));
  pFVar9 = (method->klass->rgctx_data[1].klass)->fields;
  pIVar4 = pFVar9[1].parent;
  piVar10 = (int32_t *)((longlong)&this->klass + (longlong)pFVar9[1].offset);
  iVar11._0_2_ = (pIVar4->byval_arg).attrs;
  iVar11._2_1_ = (pIVar4->byval_arg).type;
  iVar11._3_1_ = (pIVar4->byval_arg).field_0xb;
  piVar12 = piVar10 + -4;
  if (-1 < iVar11) {
    piVar12 = piVar10;
  }
  bVar13 = iRam_? != 0;
  *piVar12 = e;
  if (bVar13) {
    uVar14 = (uint)((ulonglong)piVar12 >> 0xc);
    uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
    do {
      uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
      puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
      LOCK();
      bVar13 = uVar16 == *puVar17;
      if (bVar13) {
        *puVar17 = uVar16 | 1L << (ulonglong)(uVar14 & 0x3f);
      }
      UNLOCK();
    } while (!bVar13);
  }
  pFVar9 = (method->klass->rgctx_data[1].klass)->fields;
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  func_?(this,pFVar9 + 2,t);
  return;
}

