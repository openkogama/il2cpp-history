
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
    func_?(&
                    MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnPointingWeaponChange_System__Object_
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
            pMVar2 = (limbRotationRuntimeData->fields).HasHandEquippableItem;
            if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
              pMVar3 = (pMVar2->fields).OnChange;
              pVVar4 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
                       func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
              UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
              VideoCapture+OnVideoCaptureResourceCreatedCallback::
              VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                        (pVVar4,(Object *)&(pMVar5->fields).OnChange,
                         MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnPointingWeaponChange_System__Object_
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
              pMVar5 = (limbRotationRuntimeData->fields).Emote;
              if (pMVar5 != (MVRuntimeDataVariable *)0x0) {
                pMVar3 = (pMVar5->fields).OnChange;
                ppMVar7 = &(pMVar5->fields).OnChange;
                pVVar4 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
                         func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
                UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
                VideoCapture+OnVideoCaptureResourceCreatedCallback::
                VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                          (pVVar4,(Object *)&(pMVar2->fields).OnChange,
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
    if ((headPitch->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar1 = (float *)func_?();
      (this->fields).newHeadPitchValue = *pfVar1;
      AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_UpdateHeadRotation(this,(MethodInfo *)0x0)
      ;
      return;
    }
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    if ((headYaw->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar1 = (float *)func_?();
      (this->fields).newHeadYawValue = *pfVar1;
      AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_UpdateHeadRotation(this,(MethodInfo *)0x0)
      ;
      return;
    }
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    if ((pointPitch->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar1 = (float *)func_?();
      (this->fields).newPointPitchValue = *pfVar1;
      AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_UpdatePointRotation
                (this,(MethodInfo *)0x0);
      return;
    }
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    if ((pointYaw->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar1 = (float *)func_?();
      (this->fields).newPointYawValue = *pfVar1;
      AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_UpdatePointRotation
                (this,(MethodInfo *)0x0);
      return;
    }
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPointingWeaponChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_OnPointingWeaponChange
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,Object *isPointingWeapon,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pBStack_1 = (Boolean__Class *)&TypeInfo__System__Boolean;
    func_?();
    cRam_? = '\x01';
  }
  if (isPointingWeapon != (Object *)0x0) {
    if ((isPointingWeapon->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class
       ) {
      pBStack_1 = (Boolean__Class *)isPointingWeapon;
      pbVar2 = (bool *)func_?();
      (this->fields).newPointingWeaponValue = *pbVar2;
      return;
    }
    pBStack_1 = TypeInfo__System__Boolean;
    pOStack_3 = isPointingWeapon;
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pBStack_1 = (Boolean__Class *)&stack0xfffffffc;
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateHeadRotation() */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_UpdateHeadRotation
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,MethodInfo *method)

{
  pAVar1 = (this->fields).limbManager;
  if (pAVar1 != (AvatarLimbManagerRemote *)0x0) {
    fVar2 = (this->fields).newHeadYawValue;
    this_00 = (pAVar1->fields).headRotationHandler;
    if (this_00 != (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *)0x0) {
      AvatarLimbManager+AvatarHeadRotationHandler::
      AvatarLimbManager_AvatarHeadRotationHandler_ResetIdleTimer_1
                ((AvatarLimbManager_AvatarHeadRotationHandler *)this_00,EmoteTypes__Enum_None,
                 unaff_ESI);
      auVar3._4_8_ = 0;
      auVar3._0_4_ = fVar2 * _UNK_?;
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                         ((Quaternion *)&stack0xffffffd8,(Vector3)(auVar3 << 0x20),(MethodInfo *)0x0
                         );
      fVar2 = pQVar4->y;
      fVar5 = pQVar4->z;
      fVar6 = pQVar4->w;
      QVar7 = *pQVar4;
      (this_00->fields).remoteYawRotation.x = pQVar4->x;
      (this_00->fields).remoteYawRotation.y = fVar2;
      (this_00->fields).remoteYawRotation.z = fVar5;
      (this_00->fields).remoteYawRotation.w = fVar6;
      pQVar4 = AvatarLimbManager+AvatarHeadRotationHandler::
               AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
                         ((Quaternion *)&stack0xffffffd8,
                          (AvatarLimbManager_AvatarHeadRotationHandler *)this_00,QVar7,
                          (MethodInfo *)0x0);
      fVar5 = fVar5 * _UNK_?;
      fVar2 = pQVar4->y;
      fVar6 = pQVar4->z;
      fVar8 = pQVar4->w;
      (this_00->fields).remoteYawRotation.x = pQVar4->x;
      (this_00->fields).remoteYawRotation.y = fVar2;
      (this_00->fields).remoteYawRotation.z = fVar6;
      (this_00->fields).remoteYawRotation.w = fVar8;
      euler.y = 0.0;
      euler.z = 0.0;
      euler.x = fVar5;
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                         ((Quaternion *)&stack0xffffffc0,euler,(MethodInfo *)0x0);
      fVar2 = pQVar4->y;
      fVar5 = pQVar4->z;
      fVar6 = pQVar4->w;
      QVar7 = *pQVar4;
      (this_00->fields).remotePitchRotation.x = pQVar4->x;
      (this_00->fields).remotePitchRotation.y = fVar2;
      (this_00->fields).remotePitchRotation.z = fVar5;
      (this_00->fields).remotePitchRotation.w = fVar6;
      pQVar4 = AvatarLimbManager+AvatarHeadRotationHandler::
               AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
                         ((Quaternion *)&stack0xffffffc0,
                          (AvatarLimbManager_AvatarHeadRotationHandler *)this_00,QVar7,
                          (MethodInfo *)0x0);
      fVar2 = pQVar4->y;
      fVar5 = pQVar4->z;
      fVar6 = pQVar4->w;
      (this_00->fields).remotePitchRotation.x = pQVar4->x;
      (this_00->fields).remotePitchRotation.y = fVar2;
      (this_00->fields).remotePitchRotation.z = fVar5;
      (this_00->fields).remotePitchRotation.w = fVar6;
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdatePointRotation() */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_UpdatePointRotation
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,MethodInfo *method)

{
  pAVar1 = (this->fields).limbManager;
  if (pAVar1 != (AvatarLimbManagerRemote *)0x0) {
    pAVar2 = (pAVar1->fields).pointingHandler;
    fStack_3 = (this->fields).newPointYawValue;
    fVar4 = (this->fields).newPointPitchValue;
    bVar5 = (this->fields).newPointingWeaponValue;
    if (pAVar2 != (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)0x0) {
      if ((pAVar2->fields)._.isActive == 0) {
        return;
      }
      (pAVar2->fields)._.pointState = (bVar5 != 0) + 1;
      if (bVar5 == 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Quaternion);
          cRam_? = '\x01';
        }
        pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
        QStack_7.x = (pQVar6->identityQuaternion).x;
        QStack_7.y = (pQVar6->identityQuaternion).y;
        QStack_7.z = (pQVar6->identityQuaternion).z;
        QStack_7.w = (pQVar6->identityQuaternion).w;
        iVar8 = func_?(auStack_9,&QStack_7,0);
        if (fStack_3 == *(float *)(iVar8 + 4)) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Quaternion);
            cRam_? = '\x01';
          }
          pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
          QStack_7.x = (pQVar6->identityQuaternion).x;
          QStack_7.y = (pQVar6->identityQuaternion).y;
          QStack_7.z = (pQVar6->identityQuaternion).z;
          QStack_7.w = (pQVar6->identityQuaternion).w;
          pfVar10 = (float *)func_?(auStack_9,&QStack_7,0);
          if (fVar4 == *pfVar10) {
            (pAVar2->fields)._.pointState = 0;
            return;
          }
        }
      }
      uStack_11 = 0;
      auVar12._4_8_ = 0;
      auVar12._0_4_ = fStack_3 * _UNK_?;
      pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          (&QStack_7,(Vector3)(auVar12 << 0x20),(MethodInfo *)0x0);
      fVar4 = fVar4 * _UNK_?;
      uStack_11 = 0;
      fVar14 = pQVar13->y;
      fVar15 = pQVar13->z;
      fVar16 = pQVar13->w;
      (pAVar2->fields).remoteYawRotation.x = pQVar13->x;
      (pAVar2->fields).remoteYawRotation.y = fVar14;
      (pAVar2->fields).remoteYawRotation.z = fVar15;
      (pAVar2->fields).remoteYawRotation.w = fVar16;
      euler.y = 0.0;
      euler.z = 0.0;
      euler.x = fVar4;
      pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffffb0,euler,(MethodInfo *)0x0);
      fVar4 = pQVar13->y;
      fVar14 = pQVar13->z;
      fVar15 = pQVar13->w;
      (pAVar2->fields).remotePitchRotation.x = pQVar13->x;
      (pAVar2->fields).remotePitchRotation.y = fVar4;
      (pAVar2->fields).remotePitchRotation.z = fVar14;
      (pAVar2->fields).remotePitchRotation.w = fVar15;
      (pAVar2->fields)._.elapsedPointingTime = (pAVar2->fields)._.pointingDuration;
      return;
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

