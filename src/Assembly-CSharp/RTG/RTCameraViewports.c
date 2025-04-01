
/* Void AddCamera(Camera, Rect) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_AddCamera
               (RTCameraViewports *this,Camera *camera,Rect normViewRect,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Add_UnityEngine__Camera_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)camera,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                   );
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._cameras;
  if (pLVar2 != (List_1_UnityEngine_Camera_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)pLVar2,(Object *)camera,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                      );
    if (bVar1 != 0) {
      return;
    }
    pLVar2 = (this->fields)._cameras;
    if ((pLVar2 != (List_1_UnityEngine_Camera_ *)0x0) &&
       (mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar2,(Object *)camera,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Add_UnityEngine__Camera_
                  ), camera != (Camera *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_rect
                (camera,normViewRect,(MethodInfo *)0x0);
      if ((this->fields).CameraAdded == (RTCameraViewports_CameraAddedHandler *)0x0) {
        return;
      }
      pRVar3 = (this->fields).CameraAdded;
      pvStack4 = (pRVar3->fields)._._.method;
      pCStack5 = camera;
      pvStack6 = (pRVar3->fields)._._.method_code;
      (*(pRVar3->fields)._._.invoke_impl)();
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void AddCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_AddCamera_1
               (RTCameraViewports *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Add_UnityEngine__Camera_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)camera,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pLVar2 = (this->fields)._cameras;
    if (pLVar2 == (List_1_UnityEngine_Camera_ *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)pLVar2,(Object *)camera,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                      );
    if (bVar1 == 0) {
      pLVar2 = (this->fields)._cameras;
      if (pLVar2 == (List_1_UnityEngine_Camera_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar2,(Object *)camera,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Add_UnityEngine__Camera_
                );
      if ((this->fields).CameraAdded != (RTCameraViewports_CameraAddedHandler *)0x0) {
        pRVar4 = (this->fields).CameraAdded;
        pvStack5 = (pRVar4->fields)._._.method;
        pCStack6 = camera;
        (*(pRVar4->fields)._._.invoke_impl)();
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
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._cameras;
  if (this_00 != (List_1_UnityEngine_Camera_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)this_00,(Object *)camera,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void RemoveCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_RemoveCamera
               (RTCameraViewports *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Remove_UnityEngine__Camera_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)camera,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = (this->fields)._cameras;
    if (this_00 == (List_1_UnityEngine_Camera_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Remove
              ((List_1_System_Object_ *)this_00,(Object *)camera,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Remove_UnityEngine__Camera_
              );
    if ((this->fields).CameraRemoved != (RTCameraViewports_CameraRemovedHandler *)0x0) {
      (*(((this->fields).CameraRemoved)->fields)._._.invoke_impl)();
    }
  }
  return;
}


/* Void SetFocusCamera(Int32) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_SetFocusCamera
               (RTCameraViewports *this,int32_t cameraIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (-1 < cameraIndex) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__get_Count__
                     );
      cRam_? = '\x01';
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._cameras;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    if (cameraIndex < (this_00->fields)._size) {
      camera = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (this_00,cameraIndex,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__get_Item_int_
                         );
      if (cRam_? == '\0') {
        func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
        func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
        func_?(&TypeInfo__UnityEngine__Object);
        cRam_? = '\x01';
      }
      x = RTCameraViewports_get_FocusCamera(this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)camera,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_01 = (this->fields)._cameras;
        if (this_01 == (List_1_UnityEngine_Camera_ *)0x0) {
code_?:
          func_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__Contains
                          ((List_1_System_Object_ *)this_01,(Object *)camera,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                          );
        if (bVar1 != 0) {
          RTCameraViewports_get_FocusCamera(this,(MethodInfo *)0x0);
          if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0
             ) {
            func_?();
          }
          this_02 = (RTFocusCamera *)
                    MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                              (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
          if (this_02 == (RTFocusCamera *)0x0) goto code_?;
          RTFocusCamera::RTFocusCamera_SetTargetCamera(this_02,(Camera *)camera,(MethodInfo *)0x0);
          if ((this->fields).FocusCameraChanged !=
              (RTCameraViewports_FocusCameraChangedHandler *)0x0) {
            pRVar3 = (this->fields).FocusCameraChanged;
            RTCameraViewports_get_FocusCamera(this,(MethodInfo *)0x0);
            (*(pRVar3->fields)._._.invoke_impl)();
          }
        }
      }
    }
  }
  return;
}


/* Void SetFocusCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_SetFocusCamera_1
               (RTCameraViewports *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = RTCameraViewports_get_FocusCamera(this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)camera,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (this->fields)._cameras;
    if (this_00 == (List_1_UnityEngine_Camera_ *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)this_00,(Object *)camera,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__Contains_UnityEngine__Camera_
                      );
    if (bVar1 != 0) {
      RTCameraViewports_get_FocusCamera(this,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_01 = (RTFocusCamera *)
                MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
      if (this_01 == (RTFocusCamera *)0x0) goto code_?;
      RTFocusCamera::RTFocusCamera_SetTargetCamera(this_01,camera,(MethodInfo *)0x0);
      if ((this->fields).FocusCameraChanged != (RTCameraViewports_FocusCameraChangedHandler *)0x0) {
        pRVar3 = (this->fields).FocusCameraChanged;
        RTCameraViewports_get_FocusCamera(this,(MethodInfo *)0x0);
        (*(pRVar3->fields)._._.invoke_impl)();
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
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Camera>);
    func_?(&MethodInfo__RTG__Singleton<RTG::RTCameraViewports>__Singleton__);
    func_?(&TypeInfo__RTG__Singleton<RTG::RTCameraViewports>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Camera_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Camera>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__List__);
  (this->fields)._cameras = this_00;
  func_?(&(this->fields)._cameras,this_00);
  if ((TypeInfo__RTG__Singleton<RTG::RTCameraViewports>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::RTCameraViewports>);
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,
             MethodInfo__RTG__Singleton<RTG::RTCameraViewports>__Singleton__);
  return;
}


/* Void add_CameraAdded(RTCameraViewports+CameraAddedHandler) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_add_CameraAdded
               (RTCameraViewports *this,RTCameraViewports_CameraAddedHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RTCameraViewports__CameraAddedHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).CameraAdded;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((RTCameraViewports_CameraAddedHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__RTCameraViewports__CameraAddedHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__RTCameraViewports__CameraAddedHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pRVar4 = (RTCameraViewports_CameraAddedHandler *)func_?(&this->fields,pDVar2,a);
    bVar5 = pRVar4 == a;
    a = pRVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void add_CameraRemoved(RTCameraViewports+CameraRemovedHandler) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_add_CameraRemoved
               (RTCameraViewports *this,RTCameraViewports_CameraRemovedHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RTCameraViewports__CameraRemovedHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).CameraRemoved;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((RTCameraViewports_CameraRemovedHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__RTCameraViewports__CameraRemovedHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__RTCameraViewports__CameraRemovedHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pRVar4 = (RTCameraViewports_CameraRemovedHandler *)
             func_?(&(this->fields).CameraRemoved,pDVar2,a);
    bVar5 = pRVar4 == a;
    a = pRVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void add_FocusCameraChanged(RTCameraViewports+FocusCameraChangedHandler) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_add_FocusCameraChanged
               (RTCameraViewports *this,RTCameraViewports_FocusCameraChangedHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RTCameraViewports__FocusCameraChangedHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).FocusCameraChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((RTCameraViewports_FocusCameraChangedHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__RTCameraViewports__FocusCameraChangedHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__RTCameraViewports__FocusCameraChangedHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pRVar4 = (RTCameraViewports_FocusCameraChangedHandler *)
             func_?(&(this->fields).FocusCameraChanged,pDVar2,a);
    bVar5 = pRVar4 == a;
    a = pRVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Camera get_FocusCamera() */

Camera * Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_get_FocusCamera
                   (RTCameraViewports *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    ppMStack_1 = &TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar2 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  if (pOVar2 != (Object *)0x0) {
    return (Camera *)pOVar2[4].monitor;
  }
  uVar3 = func_?(&ppMStack_1);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Camera *)(*pcVar4)();
  return pCVar5;
}


/* Int32 get_NumCameras() */

int32_t Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_get_NumCameras
                  (RTCameraViewports *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._cameras;
  if (pLVar2 != (List_1_UnityEngine_Camera_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void remove_CameraAdded(RTCameraViewports+CameraAddedHandler) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_remove_CameraAdded
               (RTCameraViewports *this,RTCameraViewports_CameraAddedHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RTCameraViewports__CameraAddedHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).CameraAdded;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((RTCameraViewports_CameraAddedHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__RTCameraViewports__CameraAddedHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__RTCameraViewports__CameraAddedHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pRVar4 = (RTCameraViewports_CameraAddedHandler *)func_?(&this->fields,pDVar2,source);
    bVar5 = pRVar4 == source;
    source = pRVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_CameraRemoved(RTCameraViewports+CameraRemovedHandler) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_remove_CameraRemoved
               (RTCameraViewports *this,RTCameraViewports_CameraRemovedHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RTCameraViewports__CameraRemovedHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).CameraRemoved;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((RTCameraViewports_CameraRemovedHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__RTCameraViewports__CameraRemovedHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__RTCameraViewports__CameraRemovedHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pRVar4 = (RTCameraViewports_CameraRemovedHandler *)
             func_?(&(this->fields).CameraRemoved,pDVar2,source);
    bVar5 = pRVar4 == source;
    source = pRVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_FocusCameraChanged(RTCameraViewports+FocusCameraChangedHandler) */

void Assembly-CSharp.dll::RTG::RTCameraViewports::RTCameraViewports_remove_FocusCameraChanged
               (RTCameraViewports *this,RTCameraViewports_FocusCameraChangedHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RTCameraViewports__FocusCameraChangedHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).FocusCameraChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((RTCameraViewports_FocusCameraChangedHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__RTCameraViewports__FocusCameraChangedHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__RTCameraViewports__FocusCameraChangedHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pRVar4 = (RTCameraViewports_FocusCameraChangedHandler *)
             func_?(&(this->fields).FocusCameraChanged,pDVar2,source);
    bVar5 = pRVar4 == source;
    source = pRVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}

