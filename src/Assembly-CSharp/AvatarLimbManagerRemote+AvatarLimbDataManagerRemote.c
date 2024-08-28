
/* Void Initialize(LimbRotationRuntimeData, AvatarLimbManagerRemote) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_Initialize
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,
               LimbRotationRuntimeData *limbRotationRuntimeData,AvatarLimbManagerRemote *limbManager
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnEmoteDataChange_System__Object_
                   );
    func_?(&
                    MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnHeadPitchChange_System__Object_
                   );
    func_?(&
                    MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnHeadYawChange_System__Object_
                   );
    func_?(&
                    MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnPointPitchChange_System__Object_
                   );
    func_?(&
                    MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnPointYawChange_System__Object_
                   );
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).limbManager;
  *ppAVar1 = limbManager;
  func_?(ppAVar1,limbManager);
  if (limbRotationRuntimeData == (LimbRotationRuntimeData *)0x0) {
code_?:
    func_?();
  }
  else {
    pMVar2 = (limbRotationRuntimeData->fields).HeadRotationYaw;
    if (pMVar2 == (MVRuntimeDataVariable *)0x0) goto code_?;
    pMVar3 = (pMVar2->fields).OnChange;
    pVVar4 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
             func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (pVVar4,(Object *)this,
               MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnHeadYawChange_System__Object_
               ,(MethodInfo *)0x0);
    pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar3,(Delegate *)pVVar4,(MethodInfo *)0x0);
    if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar2->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      func_?();
      pMVar5 = (limbRotationRuntimeData->fields).HeadRotationPitch;
      if (pMVar5 != (MVRuntimeDataVariable *)0x0) {
        pMVar3 = (pMVar5->fields).OnChange;
        pVVar4 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
                 func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
        VideoCapture+OnVideoCaptureResourceCreatedCallback::
        VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                  (pVVar4,(Object *)&(pMVar2->fields).OnChange,
                   MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnHeadPitchChange_System__Object_
                   ,(MethodInfo *)0x0);
        pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pMVar3,(Delegate *)pVVar4,(MethodInfo *)0x0);
        if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          (pMVar5->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        }
        else {
          pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pMVar6 = pMVar3;
          }
          if (pMVar6 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
          (pMVar5->fields).OnChange = pMVar6;
          pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pMVar6 = pMVar3;
          }
          if (pMVar6 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
        }
        func_?();
        pMVar2 = (limbRotationRuntimeData->fields).PointRotationYaw;
        if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
          pMVar3 = (pMVar2->fields).OnChange;
          pVVar4 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
                   func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
          UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
          VideoCapture+OnVideoCaptureResourceCreatedCallback::
          VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                    (pVVar4,(Object *)&(pMVar5->fields).OnChange,
                     MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnPointYawChange_System__Object_
                     ,(MethodInfo *)0x0);
          pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pMVar3,(Delegate *)pVVar4,(MethodInfo *)0x0);
          if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
            (pMVar2->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          }
          else {
            pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
              pMVar6 = pMVar3;
            }
            if (pMVar6 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
            (pMVar2->fields).OnChange = pMVar6;
            pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
              pMVar6 = pMVar3;
            }
            if (pMVar6 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
          }
          func_?();
          pMVar5 = (limbRotationRuntimeData->fields).PointRotationPitch;
          if (pMVar5 != (MVRuntimeDataVariable *)0x0) {
            pMVar3 = (pMVar5->fields).OnChange;
            pVVar4 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
                     func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
            UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
            VideoCapture+OnVideoCaptureResourceCreatedCallback::
            VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                      (pVVar4,(Object *)&(pMVar2->fields).OnChange,
                       MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnPointPitchChange_System__Object_
                       ,(MethodInfo *)0x0);
            pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pMVar3,(Delegate *)pVVar4,(MethodInfo *)0x0);
            if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              (pMVar5->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            }
            else {
              pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar6 = pMVar3;
              }
              if (pMVar6 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
              (pMVar5->fields).OnChange = pMVar6;
              pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar6 = pMVar3;
              }
              if (pMVar6 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
            }
            func_?();
            pMVar2 = (limbRotationRuntimeData->fields).Emote;
            if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
              pMVar3 = (pMVar2->fields).OnChange;
              ppMVar7 = &(pMVar2->fields).OnChange;
              pVVar4 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
                       func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
              UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
              VideoCapture+OnVideoCaptureResourceCreatedCallback::
              VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                        (pVVar4,(Object *)&(pMVar5->fields).OnChange,
                         MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnEmoteDataChange_System__Object_
                         ,(MethodInfo *)0x0);
              pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
                       mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)pMVar3,(Delegate *)pVVar4,(MethodInfo *)0x0);
              if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                *ppMVar7 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                func_?();
                return;
              }
              pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar6 = pMVar3;
              }
              if (pMVar6 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                *ppMVar7 = pMVar6;
                pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                  pMVar6 = pMVar3;
                }
                if (pMVar6 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                  func_?();
                  return;
                }
              }
              goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
    pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar6 = pMVar3;
    }
    if (pMVar6 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar2->fields).OnChange = pMVar6;
      pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar6 = pMVar3;
      }
      if (pMVar6 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnEmoteDataChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_OnEmoteDataChange
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,Object *newEmoteData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (Int32__Class *)&TypeInfo__System__Int32;
    func_?();
    cRam_? = '\x01';
  }
  if (newEmoteData != (Object *)0x0) {
    if ((newEmoteData->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class) {
      pIStack_1 = TypeInfo__System__Int32;
      pOStack_2 = newEmoteData;
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIStack_1 = (Int32__Class *)newEmoteData;
    pbVar4 = (byte *)func_?();
    pAStack_5 = (this->fields).limbManager;
    if (pAStack_5 != (AvatarLimbManagerRemote *)0x0) {
      pOStack_2 = (Object *)(uint)*pbVar4;
      pIStack_1 = (Int32__Class *)pAStack_5->klass[1]._0.image;
      (*(code *)(pAStack_5->klass->vtable).StartEmote.method)();
      return;
    }
  }
  pIStack_1 = (Int32__Class *)&stack0xfffffffc;
  uVar6 = func_?(&pAStack_5);
  func_?(uVar6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnHeadPitchChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_OnHeadPitchChange
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,Object *headPitch,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (headPitch != (Object *)0x0) {
    if ((headPitch->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pfVar2 = (float *)func_?();
    pitch = *pfVar2;
    this_00 = (this->fields).limbManager;
    (this->fields).newHeadPitchValue = pitch;
    if (this_00 != (AvatarLimbManagerRemote *)0x0) {
      AvatarLimbManagerRemote::AvatarLimbManagerRemote_UpdateHeadRotationRemotely
                (this_00,(this->fields).newHeadYawValue,pitch,(MethodInfo *)0x0);
      return;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnHeadYawChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_OnHeadYawChange
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,Object *headYaw,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (headYaw != (Object *)0x0) {
    if ((headYaw->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pfVar2 = (float *)func_?();
    yaw = *pfVar2;
    this_00 = (this->fields).limbManager;
    (this->fields).newHeadYawValue = yaw;
    if (this_00 != (AvatarLimbManagerRemote *)0x0) {
      AvatarLimbManagerRemote::AvatarLimbManagerRemote_UpdateHeadRotationRemotely
                (this_00,yaw,(this->fields).newHeadPitchValue,(MethodInfo *)0x0);
      return;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPointPitchChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_OnPointPitchChange
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,Object *pointPitch,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (pointPitch != (Object *)0x0) {
    if ((pointPitch->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pfVar2 = (float *)func_?();
    pitch = *pfVar2;
    this_00 = (this->fields).limbManager;
    (this->fields).newPointPitchValue = pitch;
    if (this_00 != (AvatarLimbManagerRemote *)0x0) {
      AvatarLimbManagerRemote::AvatarLimbManagerRemote_UpdatePointingRemotely
                (this_00,(this->fields).newPointYawValue,pitch,(MethodInfo *)0x0);
      return;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPointYawChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_OnPointYawChange
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,Object *pointYaw,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (pointYaw != (Object *)0x0) {
    if ((pointYaw->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pfVar2 = (float *)func_?();
    yaw = *pfVar2;
    this_00 = (this->fields).limbManager;
    (this->fields).newPointYawValue = yaw;
    if (this_00 != (AvatarLimbManagerRemote *)0x0) {
      AvatarLimbManagerRemote::AvatarLimbManagerRemote_UpdatePointingRemotely
                (this_00,yaw,(this->fields).newPointPitchValue,(MethodInfo *)0x0);
      return;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateHeadRotation() */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_UpdateHeadRotation
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,MethodInfo *method)

{
  this_00 = (this->fields).limbManager;
  if (this_00 != (AvatarLimbManagerRemote *)0x0) {
    AvatarLimbManagerRemote::AvatarLimbManagerRemote_UpdateHeadRotationRemotely
              (this_00,(this->fields).newHeadYawValue,(this->fields).newHeadPitchValue,
               (MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdatePointRotation() */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_UpdatePointRotation
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,MethodInfo *method)

{
  this_00 = (this->fields).limbManager;
  if (this_00 != (AvatarLimbManagerRemote *)0x0) {
    AvatarLimbManagerRemote::AvatarLimbManagerRemote_UpdatePointingRemotely
              (this_00,(this->fields).newPointYawValue,(this->fields).newPointPitchValue,
               (MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

