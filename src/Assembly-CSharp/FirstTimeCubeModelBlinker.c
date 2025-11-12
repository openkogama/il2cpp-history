
/* Void BeforeDraw() */

void Assembly-CSharp.dll::FirstTimeCubeModelBlinker::FirstTimeCubeModelBlinker_BeforeDraw
               (FirstTimeCubeModelBlinker *this,MethodInfo *method)

{
  this_00 = (this->fields).targetCubeModelBase;
  if (this_00 == (MVCubeModelBase *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pMVar2 = MVCubeModelBase::MVCubeModelBase_get_MeshFilters(this_00,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields)._.meshFilters = pMVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._.meshFilters >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void Initialize(Material, Camera, MVCubeModelBase) */

void Assembly-CSharp.dll::FirstTimeCubeModelBlinker::FirstTimeCubeModelBlinker_Initialize
               (FirstTimeCubeModelBlinker *this,Material *material,Camera *targetCamera,
               MVCubeModelBase *targetCubeModelBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Blinker);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CamRotateTarget);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).targetCubeModelBase = targetCubeModelBase;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).targetCubeModelBase >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields)._.targetCamera = targetCamera;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.targetCamera >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields)._.layerMask = iVar7;
  (this->fields)._.blinkMaterial = material;
  if (bVar6) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.blinkMaterial >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(TypeInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Dictionary__)
  ;
  m = (this->fields)._.blinkMaterial;
  this_01 = (Blinker *)FUN_?(TypeInfo__Blinker);
  color = &CStack_8;
  CStack_8.r = _UNK_?;
  CStack_8.g = _UNK_?;
  CStack_8.b = _UNK_?;
  CStack_8.a = _UNK_?;
  Blinker::Blinker__ctor(this_01,TypeRef__System__Activator__T._0_4_,m,color,(MethodInfo *)0x0);
  if (this_00 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,7,(Object *)this_01,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)color >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
             ->klass->rgctx_data[0x22].method);
  bVar6 = iRam_? != 0;
  (this->fields)._.blinkers = (Dictionary_2_BlinkType_Blinker_ *)this_00;
  if (bVar6) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.blinkers >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}

