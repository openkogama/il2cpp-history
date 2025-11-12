
/* Void AddCamera(Camera, Rect) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_AddCamera
               (RTCameraViewports *this,Camera *camera,Rect *normViewRect,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Add_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (camera != (Camera *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((camera->fields)._._._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar1 = (this->fields)._cameras;
      if (pLVar1 == (List_1_UnityEngine_Camera_ *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      cVar3 = FUN_?(pLVar1,camera);
      if (cVar3 == '\0') {
        if ((this->fields)._cameras == (List_1_UnityEngine_Camera_ *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FUN_?();
        fStack_4 = normViewRect->m_XMin;
        fStack_5 = normViewRect->m_YMin;
        fStack_6 = normViewRect->m_Width;
        fStack_7 = normViewRect->m_Height;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar8 = (camera->fields)._._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar8,&fStack_4);
        if ((this->fields).CameraAdded != (RTCameraViewports_CameraAddedHandler *)0x0) {
          pRVar10 = (this->fields).CameraAdded;
          (*(pRVar10->fields)._._.invoke_impl)
                    ((pRVar10->fields)._._.method_code,camera,(pRVar10->fields)._._.method);
        }
      }
    }
  }
  return;
}


/* Void AddCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_AddCamera_1
               (RTCameraViewports *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Add_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (camera != (Camera *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((camera->fields)._._._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar1 = (this->fields)._cameras;
      if (pLVar1 == (List_1_UnityEngine_Camera_ *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      cVar3 = FUN_?(pLVar1,camera);
      if (cVar3 == '\0') {
        pLVar1 = (this->fields)._cameras;
        if (pLVar1 == (List_1_UnityEngine_Camera_ *)0x0) goto code_?;
        FUN_?(pLVar1,camera);
        if ((this->fields).CameraAdded != (RTCameraViewports_CameraAddedHandler *)0x0) {
          pRVar4 = (this->fields).CameraAdded;
          (*(pRVar4->fields)._._.invoke_impl)
                    ((pRVar4->fields)._._.method_code,camera,(pRVar4->fields)._._.method);
        }
      }
    }
  }
  return;
}


/* Boolean ContainsCamera(Camera) */

bool Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_ContainsCamera
               (RTCameraViewports *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._cameras;
  if (pLVar1 != (List_1_UnityEngine_Camera_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return 0;
    }
    iVar2 = mscorlib.dll::System::Array::Array_IndexOf_69
                      ((Object__Array *)(pLVar1->fields)._items,(Object *)camera,0,
                       (pLVar1->fields)._size,
                       (MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                        ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method);
    return iVar2 != -1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void RemoveCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_RemoveCamera
               (RTCameraViewports *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Remove_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (camera != (Camera *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((camera->fields)._._._.m_CachedPtr != (void *)0x0) {
      this_00 = (this->fields)._cameras;
      if (this_00 == (List_1_UnityEngine_Camera_ *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                ((List_1_System_Object_ *)this_00,(Object *)camera,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Remove_UnityEngine__Camera_
                );
      if ((this->fields).CameraRemoved != (RTCameraViewports_CameraRemovedHandler *)0x0) {
        pRVar2 = (this->fields).CameraRemoved;
        (*(pRVar2->fields)._._.invoke_impl)
                  ((pRVar2->fields)._._.method_code,camera,(pRVar2->fields)._._.method);
      }
    }
  }
  return;
}


/* Void SetFocusCamera(Int32) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_SetFocusCamera
               (RTCameraViewports *this,int32_t cameraIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (-1 < cameraIndex) {
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar1 = (this->fields)._cameras;
    if (pLVar1 == (List_1_UnityEngine_Camera_ *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar3 = (pLVar1->fields)._size;
    if (cameraIndex < (int)uVar3) {
      if (uVar3 <= (uint)cameraIndex) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pCVar4 = (pLVar1->fields)._items;
      if (pCVar4 == (Camera__Array *)0x0) goto code_?;
      if ((uint)pCVar4->max_length <= (uint)cameraIndex) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      RTCameraViewports_SetFocusCamera_1(this,pCVar4->vector[cameraIndex],(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void SetFocusCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_SetFocusCamera_1
               (RTCameraViewports *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = RTCameraViewports_get_FocusCamera(this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (camera != (Camera *)0x0 || pCVar1 != (Camera *)0x0) {
    if (camera == (Camera *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pCVar1 == (Camera *)0x0) goto code_?;
      bVar2 = (pCVar1->fields)._._._.m_CachedPtr == (void *)0x0;
    }
    else if (pCVar1 == (Camera *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar2 = (camera->fields)._._._.m_CachedPtr == (void *)0x0;
    }
    else {
      bVar2 = pCVar1 == camera;
    }
    if (!bVar2) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((this->fields)._cameras == (List_1_UnityEngine_Camera_ *)0x0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar4 = FUN_?();
      if (cVar4 != '\0') {
        pCVar1 = RTCameraViewports_get_FocusCamera(this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
          FUN_?();
        }
        this_00 = (RTFocusCamera *)
                  MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
        if (this_00 == (RTFocusCamera *)0x0) goto code_?;
        RTFocusCamera::RTFocusCamera_SetTargetCamera(this_00,camera,(MethodInfo *)0x0);
        if ((this->fields).FocusCameraChanged != (RTCameraViewports_FocusCameraChangedHandler *)0x0)
        {
          pRVar5 = (this->fields).FocusCameraChanged;
          pCVar6 = RTCameraViewports_get_FocusCamera(this,(MethodInfo *)0x0);
          (*(pRVar5->fields)._._.invoke_impl)
                    ((pRVar5->fields)._._.method_code,pCVar1,pCVar6,(pRVar5->fields)._._.method);
        }
      }
    }
  }
  return;
}


/* RTCameraViewports() */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports__ctor
               (RTCameraViewports *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Camera>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::RTCameraViewports>__Singleton__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::RTCameraViewports>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Camera_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Camera>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__List__);
  bVar1 = iRam_? != 0;
  (this->fields)._cameras = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._cameras >> 0xc);
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
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::RTCameraViewports>->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}


/* Void add_CameraAdded(RTCameraViewports+CameraAddedHandler) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_add_CameraAdded
               (RTCameraViewports *this,RTCameraViewports_CameraAddedHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RTCameraViewports__CameraAddedHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = &this->fields;
  a = (this->fields).CameraAdded;
  do {
    pRVar2 = (RTCameraViewports_CameraAddedHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pRVar3 = (RTCameraViewports_CameraAddedHandler *)0x0;
    if (pRVar2 != (RTCameraViewports_CameraAddedHandler *)0x0) {
      if (pRVar2->klass == TypeInfo__RTG__RTCameraViewports__CameraAddedHandler) {
        pRVar3 = pRVar2;
      }
      if (pRVar3 == (RTCameraViewports_CameraAddedHandler *)0x0) {
        FUN_?(pRVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pRVar2 = pRVar1->CameraAdded;
    bVar5 = a == pRVar2;
    if (bVar5) {
      pRVar1->CameraAdded = pRVar3;
      pRVar2 = a;
    }
    UNLOCK();
    pRVar3 = a;
    if (!bVar5) {
      pRVar3 = pRVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)pRVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pRVar3 != a;
    a = pRVar3;
  } while (bVar5);
  return;
}


/* Void add_CameraRemoved(RTCameraViewports+CameraRemovedHandler) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_add_CameraRemoved
               (RTCameraViewports *this,RTCameraViewports_CameraRemovedHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RTCameraViewports__CameraRemovedHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppRVar1 = &(this->fields).CameraRemoved;
  a = (this->fields).CameraRemoved;
  do {
    pRVar2 = (RTCameraViewports_CameraRemovedHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pRVar3 = (RTCameraViewports_CameraRemovedHandler *)0x0;
    if (pRVar2 != (RTCameraViewports_CameraRemovedHandler *)0x0) {
      if (pRVar2->klass == TypeInfo__RTG__RTCameraViewports__CameraRemovedHandler) {
        pRVar3 = pRVar2;
      }
      if (pRVar3 == (RTCameraViewports_CameraRemovedHandler *)0x0) {
        FUN_?(pRVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pRVar2 = *ppRVar1;
    bVar5 = a == pRVar2;
    if (bVar5) {
      *ppRVar1 = pRVar3;
      pRVar2 = a;
    }
    UNLOCK();
    pRVar3 = a;
    if (!bVar5) {
      pRVar3 = pRVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppRVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pRVar3 != a;
    a = pRVar3;
  } while (bVar5);
  return;
}


/* Void add_FocusCameraChanged(RTCameraViewports+FocusCameraChangedHandler) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_add_FocusCameraChanged
               (RTCameraViewports *this,RTCameraViewports_FocusCameraChangedHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RTCameraViewports__FocusCameraChangedHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppRVar1 = &(this->fields).FocusCameraChanged;
  a = (this->fields).FocusCameraChanged;
  do {
    pRVar2 = (RTCameraViewports_FocusCameraChangedHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pRVar3 = (RTCameraViewports_FocusCameraChangedHandler *)0x0;
    if (pRVar2 != (RTCameraViewports_FocusCameraChangedHandler *)0x0) {
      if (pRVar2->klass == TypeInfo__RTG__RTCameraViewports__FocusCameraChangedHandler) {
        pRVar3 = pRVar2;
      }
      if (pRVar3 == (RTCameraViewports_FocusCameraChangedHandler *)0x0) {
        FUN_?(pRVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pRVar2 = *ppRVar1;
    bVar5 = a == pRVar2;
    if (bVar5) {
      *ppRVar1 = pRVar3;
      pRVar2 = a;
    }
    UNLOCK();
    pRVar3 = a;
    if (!bVar5) {
      pRVar3 = pRVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppRVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pRVar3 != a;
    a = pRVar3;
  } while (bVar5);
  return;
}


/* Camera get_FocusCamera() */

Camera * Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_get_FocusCamera
                   (RTCameraViewports *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    return (Camera *)pOVar1[4].monitor;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Camera *)(*pcVar2)();
  return pCVar3;
}


/* Int32 get_NumCameras() */

int32_t Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_get_NumCameras
                  (RTCameraViewports *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._cameras;
  if (pLVar1 != (List_1_UnityEngine_Camera_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void remove_CameraAdded(RTCameraViewports+CameraAddedHandler) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_remove_CameraAdded
               (RTCameraViewports *this,RTCameraViewports_CameraAddedHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RTCameraViewports__CameraAddedHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = &this->fields;
  source = (this->fields).CameraAdded;
  do {
    pRVar2 = (RTCameraViewports_CameraAddedHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pRVar3 = (RTCameraViewports_CameraAddedHandler *)0x0;
    if (pRVar2 != (RTCameraViewports_CameraAddedHandler *)0x0) {
      if (pRVar2->klass == TypeInfo__RTG__RTCameraViewports__CameraAddedHandler) {
        pRVar3 = pRVar2;
      }
      if (pRVar3 == (RTCameraViewports_CameraAddedHandler *)0x0) {
        FUN_?(pRVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pRVar2 = pRVar1->CameraAdded;
    bVar5 = source == pRVar2;
    if (bVar5) {
      pRVar1->CameraAdded = pRVar3;
      pRVar2 = source;
    }
    UNLOCK();
    pRVar3 = source;
    if (!bVar5) {
      pRVar3 = pRVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)pRVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pRVar3 != source;
    source = pRVar3;
  } while (bVar5);
  return;
}


/* Void remove_CameraRemoved(RTCameraViewports+CameraRemovedHandler) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_remove_CameraRemoved
               (RTCameraViewports *this,RTCameraViewports_CameraRemovedHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RTCameraViewports__CameraRemovedHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppRVar1 = &(this->fields).CameraRemoved;
  source = (this->fields).CameraRemoved;
  do {
    pRVar2 = (RTCameraViewports_CameraRemovedHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pRVar3 = (RTCameraViewports_CameraRemovedHandler *)0x0;
    if (pRVar2 != (RTCameraViewports_CameraRemovedHandler *)0x0) {
      if (pRVar2->klass == TypeInfo__RTG__RTCameraViewports__CameraRemovedHandler) {
        pRVar3 = pRVar2;
      }
      if (pRVar3 == (RTCameraViewports_CameraRemovedHandler *)0x0) {
        FUN_?(pRVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pRVar2 = *ppRVar1;
    bVar5 = source == pRVar2;
    if (bVar5) {
      *ppRVar1 = pRVar3;
      pRVar2 = source;
    }
    UNLOCK();
    pRVar3 = source;
    if (!bVar5) {
      pRVar3 = pRVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppRVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pRVar3 != source;
    source = pRVar3;
  } while (bVar5);
  return;
}


/* Void remove_FocusCameraChanged(RTCameraViewports+FocusCameraChangedHandler) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_remove_FocusCameraChanged
               (RTCameraViewports *this,RTCameraViewports_FocusCameraChangedHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RTCameraViewports__FocusCameraChangedHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppRVar1 = &(this->fields).FocusCameraChanged;
  source = (this->fields).FocusCameraChanged;
  do {
    pRVar2 = (RTCameraViewports_FocusCameraChangedHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pRVar3 = (RTCameraViewports_FocusCameraChangedHandler *)0x0;
    if (pRVar2 != (RTCameraViewports_FocusCameraChangedHandler *)0x0) {
      if (pRVar2->klass == TypeInfo__RTG__RTCameraViewports__FocusCameraChangedHandler) {
        pRVar3 = pRVar2;
      }
      if (pRVar3 == (RTCameraViewports_FocusCameraChangedHandler *)0x0) {
        FUN_?(pRVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pRVar2 = *ppRVar1;
    bVar5 = source == pRVar2;
    if (bVar5) {
      *ppRVar1 = pRVar3;
      pRVar2 = source;
    }
    UNLOCK();
    pRVar3 = source;
    if (!bVar5) {
      pRVar3 = pRVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppRVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pRVar3 != source;
    source = pRVar3;
  } while (bVar5);
  return;
}

