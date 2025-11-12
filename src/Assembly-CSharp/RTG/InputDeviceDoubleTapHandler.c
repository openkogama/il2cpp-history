
/* IAsyncResult BeginInvoke(IInputDevice, Vector2, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::RTG::InputDeviceDoubleTapHandler::InputDeviceDoubleTapHandler_BeginInvoke
          (InputDeviceDoubleTapHandler *this,IInputDevice *inputDevice,Vector2 position,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  VStack_1 = position;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  pIStack_3 = inputDevice;
  uStack_4 = FUN_?(TypeInfo__UnityEngine__Vector2,&VStack_1);
  pIVar5 = (IAsyncResult *)FUN_?(this,&pIStack_3,callback,object);
  return pIVar5;
}


/* InputDeviceDoubleTapHandler(Object, IntPtr) */

void Assembly-CSharp.dll::RTG::InputDeviceDoubleTapHandler::InputDeviceDoubleTapHandler__ctor
               (InputDeviceDoubleTapHandler *this,Object *object,void *method_1,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._._.method_ptr = *(void **)((longlong)method_1 + 8);
  (this->fields)._._.method = method_1;
  (this->fields)._._.m_target = object;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._.m_target >> 0xc);
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
  cVar6 = *(char *)((longlong)method_1 + 0x52);
  (this->fields)._._.method_code = this;
  if ((*(byte *)((longlong)method_1 + 0x4c) & 0x10) == 0) {
    if (cVar6 == '\x01') {
      if ((this->fields)._._.method_is_virtual == 0) {
        pcVar7 = FUN_?;
      }
      else if (((*(byte *)((longlong)method_1 + 0x53) & 3) == 2) &&
              (*(longlong *)(*(longlong *)((longlong)method_1 + 0x40) + 0x10) != 0)) {
        lVar8 = *(longlong *)((longlong)method_1 + 0x20);
        if ((((*(byte *)(lVar8 + 0x118) & 0x20) == 0) && (*(char *)(lVar8 + 0x2a) != '\x13')) &&
           (*(char *)(lVar8 + 0x2a) != '\x1e')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        pcVar7 = FUN_?;
        if (!bVar1) {
          pcVar7 = FUN_?;
        }
      }
      else {
        lVar8 = *(longlong *)((longlong)method_1 + 0x20);
        if (((*(byte *)(lVar8 + 0x118) & 0x20) != 0) ||
           ((*(char *)(lVar8 + 0x2a) == '\x13' ||
            (pcVar7 = FUN_?, *(char *)(lVar8 + 0x2a) == '\x1e')))) {
          pcVar7 = FUN_?;
        }
      }
      (this->fields)._._.invoke_impl = pcVar7;
      (this->fields)._._.extra_arg = FUN_?;
      return;
    }
    if (object == (Object *)0x0) {
      uVar9 = func_?();
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (cVar6 == '\x02') {
    puVar10 = &UNK_?;
    goto code_?;
  }
  (this->fields)._._.method_code = (this->fields)._._.m_target;
  puVar10 = (this->fields)._._.method_ptr;
code_?:
  (this->fields)._._.invoke_impl = puVar10;
  (this->fields)._._.extra_arg = FUN_?;
  return;
}

