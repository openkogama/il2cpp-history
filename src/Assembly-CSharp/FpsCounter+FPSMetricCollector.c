
/* Void CollectFPSMetric(Single) */

void Assembly-CSharp.dll::FpsCounter+FPSMetricCollector::
     FpsCounter_FPSMetricCollector_CollectFPSMetric
               (FpsCounter_FPSMetricCollector *this,float averageFPS,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (averageFPS,0.0,60.0,(MethodInfo *)0x0);
  if (fVar1 < _UNK_?) {
    pSVar2 = StringLiteral_FPSBucket0_20;
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?();
      pSVar2 = StringLiteral_FPSBucket0_20;
    }
  }
  else if (fVar1 < _UNK_?) {
    pSVar2 = StringLiteral_FPSBucket20_30;
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?();
      pSVar2 = StringLiteral_FPSBucket20_30;
    }
  }
  else {
    pSVar2 = StringLiteral_FPSBucket30_;
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?();
      pSVar2 = StringLiteral_FPSBucket30_;
    }
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar2,1,(MethodInfo *)0x0);
  method = (MethodInfo *)&averageFPS;
  arg1 = (Object *)func_?();
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    method = (MethodInfo *)TypeInfo__System__String;
    averageFPS = (float)&UNK_?;
    func_?();
  }
  pSVar2 = StringLiteral_FPS_collected__;
  method = (MethodInfo *)0x0;
  averageFPS = (float)arg1;
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_FPS_collected__,arg1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  StatHatWrapper::StatHatWrapper_Value_1(StringLiteral_FPS,3.5627477e-29,(MethodInfo *)0x0);
  *(undefined1 *)&(pSVar2->fields).start_char = 1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = (PhotonPeer *)
              AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                        ((AvatarUIHandlerRemote *)this_00,(MethodInfo *)0x0);
    if (this_01 != (PhotonPeer *)0x0) {
      value = Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::
              PhotonPeer_get_RoundTripTime(this_01,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Value(StringLiteral_RoundTripTime,value,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_FPS,(MethodInfo *)0x0);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
                  (this_02,IncrementStatRequestType__Enum_FPS,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* FpsCounter+FPSMetricCollector() */

void Assembly-CSharp.dll::FpsCounter+FPSMetricCollector::FpsCounter_FPSMetricCollector__ctor
               (FpsCounter_FPSMetricCollector *this,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).metricsCollected = 0;
  (this->fields).startTime = fVar1;
  return;
}

