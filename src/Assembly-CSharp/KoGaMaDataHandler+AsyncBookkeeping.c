
/* Void Done() */

void Assembly-CSharp.dll::KoGaMaDataHandler+AsyncBookkeeping::
     KoGaMaDataHandler_AsyncBookkeeping_Done
               (KoGaMaDataHandler_AsyncBookkeeping *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pUVar2 = (this->fields).doneCallback;
  if (pUVar2 != (UnityAction_1_System_Int32_ *)0x0) {
    puStack_1 = (pUVar2->fields)._._.method;
    iStack_3 = (this->fields).rootId;
    pvStack_4 = (pUVar2->fields)._._.method_code;
    (*(pUVar2->fields)._._.invoke_impl)();
    return;
  }
  uVar5 = func_?(&pvStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).bp = bp;
  func_?(&(this->fields).bp,bp);
  (this->fields).callBack = callBack;
  func_?(&(this->fields).callBack,callBack);
  (this->fields).readRuntimeData = readRuntimeData;
  (this->fields).doneCallback = doneCallback;
  func_?(&(this->fields).doneCallback,doneCallback);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                    ((MethodInfo *)0x0);
  (this->fields).workStartTime = fVar1;
  return;
}


/* Boolean get_WaitFrame() */

bool Assembly-CSharp.dll::KoGaMaDataHandler+AsyncBookkeeping::
     KoGaMaDataHandler_AsyncBookkeeping_get_WaitFrame
               (KoGaMaDataHandler_AsyncBookkeeping *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                    ((MethodInfo *)0x0);
  fVar2 = fVar1 - (this->fields).workStartTime;
  pfVar3 = &(this->fields).workTime;
  if (fVar2 < *pfVar3 || fVar2 == *pfVar3) {
    return 0;
  }
  (this->fields).workStartTime = fVar1;
  return 1;
}

