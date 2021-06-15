
/* Void Done() */

void Assembly-CSharp.dll::KoGaMaDataHandler+AsyncBookkeeping::
     KoGaMaDataHandler_AsyncBookkeeping_Done
               (KoGaMaDataHandler_AsyncBookkeeping *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields).doneCallback;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,(this->fields).rootId,
               MethodInfo__UnityEngine__Events__UnityAction<int>__Invoke_int_);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).bp = bp;
  (this->fields).callBack = callBack;
  (this->fields).readRuntimeData = readRuntimeData;
  (this->fields).doneCallback = doneCallback;
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

