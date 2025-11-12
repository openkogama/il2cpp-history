
/* IEnumerator Get(String, Action`1[UnityEngine.Sprite], Action`1[String]) */

IEnumerator *
Assembly-CSharp.dll::UGUI::Portal::Scripts::ImageDownloader::ImageDownloader_Get
          (String *url,Action_1_UnityEngine_Sprite_ *onSuccess,Action_1_String_ *onError,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UGUI::Portal::Scripts::WebResponse>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Networking__DownloadHandlerBuffer);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__Get);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Portal__Scripts__ImageDownloader____c__DisplayClass1_0___Get_b__0_UGUI__Portal__Scripts__WebResponse_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__ImageDownloader____c__DisplayClass1_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(TypeInfo__UGUI__Portal__Scripts__ImageDownloader____c__DisplayClass1_0);
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pIVar2 = (IEnumerator *)(*pcVar1)();
    return pIVar2;
  }
  object[1].monitor = (MonitorData *)onSuccess;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&object[1].monitor >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  iVar8 = iRam_?;
  object[2].klass = (Object__Class *)onError;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)(object + 2) >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar7);
  }
  object[2].monitor = (MonitorData *)url;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&object[2].monitor >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pOVar9 = (Object__Class *)FUN_?(TypeInfo__UnityEngine__Networking__DownloadHandlerBuffer);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar1 = (code *)swi(3);
    pIVar2 = (IEnumerator *)(*pcVar1)();
    return pIVar2;
  }
  pcRam_? = pcVar1;
  pcVar11 = (char *)(*pcRam_?)(pOVar9);
  bVar7 = iRam_? != 0;
  (pOVar9->_0).name = pcVar11;
  object[1].klass = pOVar9;
  if (bVar7) {
    uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  item1 = (Object *)object[2].monitor;
  pOVar9 = object[1].klass;
  this = (UnityAction_1_System_Object_ *)
         FUN_?(TypeInfo__System__Action<UGUI::Portal::Scripts::WebResponse>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this,object,
             MethodInfo__UGUI__Portal__Scripts__ImageDownloader____c__DisplayClass1_0___Get_b__0_UGUI__Portal__Scripts__WebResponse_
             ,(MethodInfo *)0x0);
  this_00 = (IEnumerator__Class *)FUN_?(TypeInfo__UGUI__Portal__Scripts__Get);
  mscorlib.dll::System::Tuple`2[Object,Object]::Tuple_2_Object_Object___ctor
            ((Tuple_2_Object_Object_ *)this_00,item1,(Object *)this,(MethodInfo *)0x0);
  bVar7 = iRam_? != 0;
  *(Object__Class **)&(this_00->_0).byval_arg.attrs = pOVar9;
  if (bVar7) {
    uVar3 = (uint)((ulonglong)&(this_00->_0).byval_arg.attrs >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__WebRequest___DoRequest_d__6,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar2 = (IEnumerator *)
            FUN_?(TypeInfo__UGUI__Portal__Scripts__WebRequest___DoRequest_d__6);
  bVar7 = iRam_? != 0;
  *(undefined4 *)&pIVar2[1].klass = 0;
  pIVar2[2].klass = this_00;
  if (bVar7) {
    uVar3 = (uint)((ulonglong)(pIVar2 + 2) >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar12 = *puVar6;
      LOCK();
      uVar5 = *puVar6;
      if (uVar12 == uVar5) {
        *puVar6 = uVar12 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar12 != uVar5);
  }
  return pIVar2;
}


/* ImageDownloader() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::ImageDownloader::ImageDownloader__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__DefaultImages);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__ImageDownloader);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (DefaultImages *)FUN_?(TypeInfo__UGUI__Portal__Scripts__DefaultImages);
  DefaultImages::DefaultImages__ctor_1(this,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  TypeInfo__UGUI__Portal__Scripts__ImageDownloader->static_fields->DefaultImages = this;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)TypeInfo__UGUI__Portal__Scripts__ImageDownloader->static_fields >> 0xc
                  );
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
  return;
}

