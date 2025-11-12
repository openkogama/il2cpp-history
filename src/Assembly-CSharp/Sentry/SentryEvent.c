
/* SentryEvent(String, Dictionary`2[System.String,System.String],
   Dictionary`2[System.String,System.Object], List`1[Sentry.Breadcrumb]) */

void Assembly-CSharp.dll::Sentry::SentryEvent::SentryEvent__ctor
               (SentryEvent *this,String *message,Dictionary_2_System_String_System_String_ *tags,
               Dictionary_2_System_String_System_Object_ *extra,
               List_1_Sentry_Breadcrumb_ *breadcrumbs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Sentry__Context);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Sentry__SdkVersion);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_csharp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_yyyy_MM_ddTHH__mm__ss);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_N);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_error);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).platform = StringLiteral_csharp;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).platform >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pSVar6 = (SdkVersion *)FUN_?(TypeInfo__Sentry__SdkVersion);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_sentry_unity_lite);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_0_4);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (pSVar6->fields).name = StringLiteral_sentry_unity_lite;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&pSVar6->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  iVar7 = iRam_?;
  (pSVar6->fields).version = StringLiteral__0_0_4;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(pSVar6->fields).version >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar1);
  }
  (this->fields).sdk = pSVar6;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).sdk >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  uStack_8 = 0;
  uStack_9 = 0;
  mscorlib.dll::Interop::Interop_GetRandomBytes((uint8_t *)&uStack_8,0x10,(MethodInfo *)0x0);
  uStack_8 = uStack_8 & 0xfffffffffffffff | 0x4000000000000000;
  uStack_9 = uStack_9 & 0xffffffffffffff3f | 0x80;
  GStack_10._a = (undefined4)uStack_8;
  GStack_10._b = uStack_8._4_2_;
  GStack_10._c = uStack_8._6_2_;
  GStack_10._d = (undefined1)uStack_9;
  GStack_10._e = uStack_9._1_1_;
  GStack_10._f = uStack_9._2_1_;
  GStack_10._g = uStack_9._3_1_;
  GStack_10._h = uStack_9._4_1_;
  GStack_10._i = uStack_9._5_1_;
  GStack_10._j = uStack_9._6_1_;
  GStack_10._k = uStack_9._7_1_;
  pSVar11 = mscorlib.dll::System::Guid::Guid_ToString_2
                     (&GStack_10,StringLiteral_N,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  (this->fields).event_id = pSVar11;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  iVar7 = iRam_?;
  (this->fields).message = message;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).message >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  dateTime = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  pSVar11 = StringLiteral_yyyy_MM_ddTHH__mm__ss;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTimeFormat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTimeFormat->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar11 = mscorlib.dll::System::DateTimeFormat::DateTimeFormat_Format
                     (dateTime,pSVar11,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  iVar7 = iRam_?;
  (this->fields).timestamp = pSVar11;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).timestamp >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar1);
  }
  (this->fields).level = StringLiteral_error;
  iVar12 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).level >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar12 = iRam_?;
    } while (!bVar1);
  }
  (this->fields).breadcrumbs = breadcrumbs;
  if (iVar12 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).breadcrumbs >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_00 = (Context *)FUN_?(TypeInfo__Sentry__Context);
  Context::Context__ctor(this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).contexts = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).contexts >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar11 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_version
                     ((MethodInfo *)0x0);
  (this->fields).release = pSVar11;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).release >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  iVar7 = iRam_?;
  (this->fields).tags = tags;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).tags >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar1);
  }
  (this->fields).extra = extra;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).extra >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

