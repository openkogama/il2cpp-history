
/* IEnumerator CreateRequest(GameDto, Action`1[UGUI.Portal.Scripts.SessionLocatorResponse],
   Action`1[String]) */

IEnumerator *
Assembly-CSharp.dll::UGUI::Portal::Scripts::SessionLocator::SessionLocator_CreateRequest
          (SessionLocator *this,GameDto *gameDto,
          Action_1_UGUI_Portal_Scripts_SessionLocatorResponse_ *onSuccess,Action_1_String_ *onError,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UGUI::Portal::Scripts::WebResponse>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__Get);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Portal__Scripts__SessionLocator____c__DisplayClass2_0___CreateRequest_b__0_UGUI__Portal__Scripts__WebResponse_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__SessionLocator____c__DisplayClass2_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__objectID__1__profileID_0_lan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(TypeInfo__UGUI__Portal__Scripts__SessionLocator____c__DisplayClass2_0);
  if (object != (Object *)0x0) {
    object[1].klass = (Object__Class *)onSuccess;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    iVar6 = iRam_?;
    object[1].monitor = (MonitorData *)onError;
    if (iVar6 != 0) {
      uVar1 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      uVar3 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar4 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar7 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar7 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pSVar8 = (this->fields).url;
    if (gameDto != (GameDto *)0x0) {
      aiStackX_18[0] = (gameDto->fields).id;
      arg1 = (Object *)FUN_?(uRam_?,aiStackX_18);
      format = StringLiteral__0__objectID__1__profileID_0_lan;
      PStack_9._arg0 = (Object *)0x0;
      PStack_9._arg1 = (Object *)0x0;
      PStack_9._arg2 = (Object *)0x0;
      PStack_9._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_9,(Object *)pSVar8,arg1,(MethodInfo *)0x0);
      PStack_10._arg0 = PStack_9._arg0;
      PStack_10._arg1 = PStack_9._arg1;
      PStack_10._arg2 = PStack_9._arg2;
      PStack_10._args = PStack_9._args;
      pSVar8 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,format,&PStack_10,(MethodInfo *)0x0);
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UGUI::Portal::Scripts::WebResponse>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,object,
                 MethodInfo__UGUI__Portal__Scripts__SessionLocator____c__DisplayClass2_0___CreateRequest_b__0_UGUI__Portal__Scripts__WebResponse_
                 ,(MethodInfo *)0x0);
      this_01 = (IEnumerator__Class *)FUN_?(TypeInfo__UGUI__Portal__Scripts__Get);
      mscorlib.dll::System::Tuple`2[Object,Object]::Tuple_2_Object_Object___ctor
                ((Tuple_2_Object_Object_ *)this_01,(Object *)pSVar8,(Object *)this_00,
                 (MethodInfo *)0x0);
      if (this_01 != (IEnumerator__Class *)0x0) {
        if (cRam_? == '\0') {
          PStack_10._arg1 = (Object *)&UNK_?;
          FUN_?(&TypeInfo__UGUI__Portal__Scripts__WebRequest___DoRequest_d__6,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        PStack_10._arg1 = (Object *)&UNK_?;
        pIVar11 = (IEnumerator *)
                 FUN_?(TypeInfo__UGUI__Portal__Scripts__WebRequest___DoRequest_d__6);
        bVar5 = iRam_? != 0;
        *(undefined4 *)&pIVar11[1].klass = 0;
        pIVar11[2].klass = this_01;
        if (bVar5) {
          uVar1 = (uint)((ulonglong)(pIVar11 + 2) >> 0xc);
          puVar4 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar4;
            LOCK();
            uVar3 = *puVar4;
            if (uVar7 == uVar3) {
              *puVar4 = uVar7 | 1L << (uVar1 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar3);
        }
        return pIVar11;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  pIVar11 = (IEnumerator *)(*pcVar12)();
  return pIVar11;
}

