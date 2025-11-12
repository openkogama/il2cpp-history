
/* Void Done() */

void Assembly-CSharp.dll::KoGaMaDataHandler+AsyncBookkeeping::
     KoGaMaDataHandler_AsyncBookkeeping_Done
               (KoGaMaDataHandler_AsyncBookkeeping *this,MethodInfo *method)

{
  pUVar1 = (this->fields).doneCallback;
  if (pUVar1 != (UnityAction_1_System_Int32_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,(this->fields).rootId,(pUVar1->fields)._._.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* KoGaMaDataHandler+AsyncBookkeeping(BytePacker,
   UnityAction`2[System.Collections.Generic.Dictionary`2[System.Object,System.Object],MV.WorldObject.KogamaDataType],
   Boolean, UnityAction`1[System.Int32]) */

void Assembly-CSharp.dll::KoGaMaDataHandler+AsyncBookkeeping::
     KoGaMaDataHandler_AsyncBookkeeping__ctor
               (KoGaMaDataHandler_AsyncBookkeeping *this,BytePacker *bp,
               UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
               *callBack,bool readRuntimeData,UnityAction_1_System_Int32_ *doneCallback,
               MethodInfo *method)

{
  (this->fields).numberOfPrototypes = -1;
  (this->fields).numberOfWorldObjects = -1;
  (this->fields).numberOfLinks = -1;
  (this->fields).numberOfObjectLinks = -1;
  (this->fields).rootId = -1;
  (this->fields).waitOneFrameBeforeDoneCallback = 1;
  (this->fields).workTime = 1.0;
  (this->fields).bp = bp;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).bp >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (ulonglong)(uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  iVar6 = iRam_?;
  (this->fields).callBack = callBack;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).callBack >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (ulonglong)(uVar1 & 0x3f);
      }
      UNLOCK();
      iVar6 = iRam_?;
    } while (!bVar5);
  }
  (this->fields).doneCallback = doneCallback;
  (this->fields).readRuntimeData = readRuntimeData;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).doneCallback >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (ulonglong)(uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  fVar9 = (float)(*pcRam_?)();
  (this->fields).workStartTime = fVar9;
  return;
}


/* Boolean get_WaitFrame() */

bool Assembly-CSharp.dll::KoGaMaDataHandler+AsyncBookkeeping::
     KoGaMaDataHandler_AsyncBookkeeping_get_WaitFrame
               (KoGaMaDataHandler_AsyncBookkeeping *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)(*pcRam_?)();
  fVar5 = fVar4 - (this->fields).workStartTime;
  pfVar6 = &(this->fields).workTime;
  if (*pfVar6 <= fVar5 && fVar5 != *pfVar6) {
    (this->fields).workStartTime = fVar4;
    return 1;
  }
  return 0;
}

