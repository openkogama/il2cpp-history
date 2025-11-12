
/* Context() */

void Assembly-CSharp.dll::Sentry::Context::Context__ctor(Context *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Sentry__App);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__BatteryStatus);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__DateTimeOffset);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__DeviceType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Sentry__Device);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Sentry__Gpu);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Rendering__GraphicsDeviceType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__NPOTSupport);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Sentry__OperatingSystem);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_System_Product_Name__System_manu);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_landscape);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_n_a);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_portrait);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_yyyy_MM_ddTHH__mm__ssZ);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_release);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (OperatingSystem *)FUN_?();
  pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetOperatingSystem
                      ((MethodInfo *)0x0);
  iVar3 = iRam_?;
  if (pOVar1 == (OperatingSystem *)0x0) goto code_?;
  (pOVar1->fields).name = pSVar2;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&pOVar1->fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar3 = iRam_?;
    } while (!bVar8);
  }
  (this->fields).os = pOVar1;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).os >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pDVar9 = (Device *)FUN_?();
  bVar8 = iRam_? != 0;
  (this->fields).device = pDVar9;
  if (bVar8) {
    uVar4 = (uint)((ulonglong)&(this->fields).device >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pcVar10 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar10 = (code *)FUN_?(), pcVar10 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pcRam_? = pcVar10;
  uVar12 = (*pcRam_?)();
  switch(uVar12) {
  case 1:
  case 2:
    pDVar9 = (this->fields).device;
    pSVar2 = StringLiteral_portrait;
    break;
  case 3:
  case 4:
    pDVar9 = (this->fields).device;
    pSVar2 = StringLiteral_landscape;
    break;
  default:
    goto code_?;
  }
  if (pDVar9 != (Device *)0x0) {
    (pDVar9->fields).orientation = pSVar2;
    func_?();
code_?:
    pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetDeviceModel
                        ((MethodInfo *)0x0);
    if ((((pSVar2 != StringLiteral_n_a) &&
         ((((pSVar2 == (String *)0x0 || (StringLiteral_n_a == (String *)0x0)) ||
           ((pSVar2->fields)._stringLength != (StringLiteral_n_a->fields)._stringLength)) ||
          (bVar13 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar2->fields)._firstChar,
                              (uint8_t *)&(StringLiteral_n_a->fields)._firstChar,
                              (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar13 == 0)))) && (pSVar2 != StringLiteral_System_Product_Name__System_manu)) &&
       (((pSVar2 == (String *)0x0 ||
         (StringLiteral_System_Product_Name__System_manu == (String *)0x0)) ||
        (((pSVar2->fields)._stringLength !=
          (StringLiteral_System_Product_Name__System_manu->fields)._stringLength ||
         (bVar13 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar2->fields)._firstChar,
                             (uint8_t *)
                             &(StringLiteral_System_Product_Name__System_manu->fields)._firstChar,
                             (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar13 == 0)))))) {
      pDVar9 = (this->fields).device;
      if (pDVar9 == (Device *)0x0) goto code_?;
      bVar8 = iRam_? != 0;
      (pDVar9->fields).model = pSVar2;
      if (bVar8) {
        uVar4 = (uint)((ulonglong)&(pDVar9->fields).model >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
    }
    pDVar9 = (this->fields).device;
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    fVar14 = (float)(*pcRam_?)();
    pcVar10 = pcRam_?;
    if (pDVar9 != (Device *)0x0) {
      (pDVar9->fields).battery_level = fVar14 * _UNK_?;
      pDVar9 = (this->fields).device;
      pcVar15 = pcRam_?;
      if ((pcVar10 == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar15 = pcVar10, pcVar10 == (code *)0x0)
         ) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar15;
      uStack_16 = (*pcVar10)();
      auStack_17._0_8_ = TypeInfo__UnityEngine__BatteryStatus;
      auStack_17._8_8_ = (MonitorData *)0xffffffffffffffff;
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)auStack_17,(MethodInfo *)0x0);
      if (pDVar9 != (Device *)0x0) {
        bVar8 = iRam_? != 0;
        (pDVar9->fields).battery_status = pSVar2;
        if (bVar8) {
          uVar4 = (uint)((ulonglong)&(pDVar9->fields).battery_status >> 0xc);
          uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          do {
            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar8 = uVar6 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        iVar3 = (*pcRam_?)();
        if (iVar3 != 0) {
          pDVar9 = (this->fields).device;
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar11 = func_?(&UNK_?);
            FUN_?(uVar11,0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcRam_? = pcVar10;
          iVar3 = (*pcRam_?)();
          if (pDVar9 == (Device *)0x0) goto code_?;
          (pDVar9->fields).memory_size = (longlong)iVar3 << 0x14;
        }
        pDVar9 = (this->fields).device;
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        uStack_16 = (*pcRam_?)();
        auStack_17._0_8_ = TypeInfo__UnityEngine__DeviceType;
        auStack_17._8_8_ = (MonitorData *)0xffffffffffffffff;
        pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)auStack_17,(MethodInfo *)0x0);
        if (pDVar9 != (Device *)0x0) {
          bVar8 = iRam_? != 0;
          (pDVar9->fields).device_type = pSVar2;
          if (bVar8) {
            uVar4 = (uint)((ulonglong)&(pDVar9->fields).device_type >> 0xc);
            uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
            do {
              uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
              puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar6 == *puVar7;
              if (bVar8) {
                *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          pDVar9 = (this->fields).device;
          pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetProcessorType
                              ((MethodInfo *)0x0);
          if (pDVar9 != (Device *)0x0) {
            bVar8 = iRam_? != 0;
            (pDVar9->fields).cpu_description = pSVar2;
            if (bVar8) {
              uVar4 = (uint)((ulonglong)&(pDVar9->fields).cpu_description >> 0xc);
              uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
              do {
                uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                LOCK();
                bVar8 = uVar6 == *puVar7;
                if (bVar8) {
                  *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                }
                UNLOCK();
              } while (!bVar8);
            }
            pDVar9 = (this->fields).device;
            if (pDVar9 != (Device *)0x0) {
              (pDVar9->fields).simulator = 0;
              pGVar18 = (Gpu *)FUN_?();
              pcVar10 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar10 = (code *)FUN_?(), pcVar10 == (code *)0x0)) {
                uVar11 = func_?(&UNK_?);
                FUN_?(uVar11,0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pcRam_? = pcVar10;
              iVar19 = (*pcRam_?)();
              if (pGVar18 != (Gpu *)0x0) {
                (pGVar18->fields).id = iVar19;
                pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                          SystemInfo_GetGraphicsDeviceName((MethodInfo *)0x0);
                bVar8 = iRam_? != 0;
                (pGVar18->fields).name = pSVar2;
                if (bVar8) {
                  uVar4 = (uint)((ulonglong)&pGVar18->fields >> 0xc);
                  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                  do {
                    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                    LOCK();
                    bVar8 = uVar6 == *puVar7;
                    if (bVar8) {
                      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar8);
                }
                pcVar10 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar10 = (code *)FUN_?(), pcVar10 == (code *)0x0)) {
                  uVar11 = func_?(&UNK_?);
                  FUN_?(uVar11,0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pcRam_? = pcVar10;
                iVar19 = (*pcRam_?)();
                (pGVar18->fields).vendor_id = iVar19;
                pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                          SystemInfo_GetGraphicsDeviceVendor((MethodInfo *)0x0);
                bVar8 = iRam_? != 0;
                (pGVar18->fields).vendor_name = pSVar2;
                if (bVar8) {
                  uVar4 = (uint)((ulonglong)&(pGVar18->fields).vendor_name >> 0xc);
                  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                  do {
                    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                    LOCK();
                    bVar8 = uVar6 == *puVar7;
                    if (bVar8) {
                      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar8);
                }
                pcVar10 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                  uVar11 = func_?(&UNK_?);
                  FUN_?(uVar11,0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pcRam_? = pcVar10;
                iVar19 = (*pcRam_?)();
                (pGVar18->fields).memory_size = iVar19;
                pcVar10 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                  uVar11 = func_?(&UNK_?);
                  FUN_?(uVar11,0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pcRam_? = pcVar10;
                bVar13 = (*pcRam_?)();
                (pGVar18->fields).multi_threaded_rendering = bVar13;
                pcVar10 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                  uVar11 = func_?(&UNK_?);
                  FUN_?(uVar11,0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pcRam_? = pcVar10;
                uStack_16 = (*pcRam_?)();
                auStack_17._0_8_ = TypeInfo__UnityEngine__NPOTSupport;
                auStack_17._8_8_ = (MonitorData *)0xffffffffffffffff;
                pSVar2 = mscorlib.dll::System::Enum::Enum_ToString
                                    ((Enum *)auStack_17,(MethodInfo *)0x0);
                bVar8 = iRam_? != 0;
                (pGVar18->fields).npot_support = pSVar2;
                if (bVar8) {
                  uVar4 = (uint)((ulonglong)&(pGVar18->fields).npot_support >> 0xc);
                  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                  do {
                    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                    LOCK();
                    bVar8 = uVar6 == *puVar7;
                    if (bVar8) {
                      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar8);
                }
                pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                          SystemInfo_GetGraphicsDeviceVersion((MethodInfo *)0x0);
                bVar8 = iRam_? != 0;
                (pGVar18->fields).version = pSVar2;
                if (bVar8) {
                  uVar4 = (uint)((ulonglong)&(pGVar18->fields).version >> 0xc);
                  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                  do {
                    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                    LOCK();
                    bVar8 = uVar6 == *puVar7;
                    if (bVar8) {
                      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar8);
                }
                pcVar10 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                  uVar11 = func_?(&UNK_?);
                  FUN_?(uVar11,0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pcRam_? = pcVar10;
                uStack_16 = (*pcRam_?)();
                auStack_17._0_8_ = TypeInfo__UnityEngine__Rendering__GraphicsDeviceType;
                auStack_17._8_8_ = (MonitorData *)0xffffffffffffffff;
                pSVar2 = mscorlib.dll::System::Enum::Enum_ToString
                                    ((Enum *)auStack_17,(MethodInfo *)0x0);
                (pGVar18->fields).api_type = pSVar2;
                if (iRam_? != 0) {
                  uVar4 = (uint)((ulonglong)&(pGVar18->fields).api_type >> 0xc);
                  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                  do {
                    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                    LOCK();
                    bVar8 = uVar6 == *puVar7;
                    if (bVar8) {
                      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar8);
                }
                iVar3 = iRam_?;
                (this->fields).gpu = pGVar18;
                if (iVar3 != 0) {
                  uVar4 = (uint)((ulonglong)&(this->fields).gpu >> 0xc);
                  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                  do {
                    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                    LOCK();
                    bVar8 = uVar6 == *puVar7;
                    if (bVar8) {
                      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar8);
                }
                pAVar20 = (App *)FUN_?(TypeInfo__Sentry__App);
                bVar8 = iRam_? != 0;
                (this->fields).app = pAVar20;
                if (bVar8) {
                  uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
                  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                  do {
                    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                    LOCK();
                    bVar8 = uVar6 == *puVar7;
                    if (bVar8) {
                      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar8);
                }
                pAVar20 = (this->fields).app;
                if (*(int *)&(TypeInfo__System__DateTimeOffset->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__DateTime);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
                  FUN_?();
                }
                dateTime = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
                DStack_21._dateTime._dateData = 0;
                DStack_21._offsetMinutes = 0;
                DStack_21._10_6_ = 0;
                mscorlib.dll::System::DateTimeOffset::DateTimeOffset__ctor_1
                          (&DStack_21,dateTime,(MethodInfo *)0x0);
                pcVar10 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                  uVar11 = func_?(&UNK_?);
                  FUN_?(uVar11,0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pcRam_? = pcVar10;
                uVar4 = (*pcRam_?)();
                pDVar22 = mscorlib.dll::System::DateTimeOffset::DateTimeOffset_AddSeconds
                                    ((DateTimeOffset *)auStack_17,&DStack_21,
                                     (double)(float)(uVar4 ^ _UNK_?),(MethodInfo *)0x0);
                DStack_21._dateTime._dateData = (pDVar22->_dateTime)._dateData;
                DStack_21._offsetMinutes = pDVar22->_offsetMinutes;
                DStack_21._10_6_ = *(undefined6 *)&pDVar22->field_0xa;
                pSVar2 = mscorlib.dll::System::DateTimeOffset::DateTimeOffset_ToString_1
                                    (&DStack_21,StringLiteral_yyyy_MM_ddTHH__mm__ssZ,
                                     (MethodInfo *)0x0);
                if (pAVar20 != (App *)0x0) {
                  bVar8 = iRam_? != 0;
                  (pAVar20->fields).app_start_time = pSVar2;
                  if (bVar8) {
                    uVar4 = (uint)((ulonglong)&(pAVar20->fields).app_start_time >> 0xc);
                    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                    do {
                      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                      LOCK();
                      bVar8 = uVar6 == *puVar7;
                      if (bVar8) {
                        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar8);
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pcVar10 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                    uVar11 = func_?(&UNK_?);
                    FUN_?(uVar11,0);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pcRam_? = pcVar10;
                  cVar23 = (*pcRam_?)();
                  pAVar20 = (this->fields).app;
                  if (cVar23 == '\0') {
                    if (pAVar20 != (App *)0x0) {
                      bVar8 = iRam_? != 0;
                      (pAVar20->fields).build_type = StringLiteral_release;
                      if (bVar8) {
                        uVar4 = (uint)((ulonglong)&(pAVar20->fields).build_type >> 0xc);
                        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                        do {
                          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                          LOCK();
                          bVar8 = uVar6 == *puVar7;
                          if (bVar8) {
                            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar8);
                      }
                      return;
                    }
                  }
                  else if (pAVar20 != (App *)0x0) {
                    bVar8 = iRam_? == 0;
                    (pAVar20->fields).build_type = StringLiteral_debug;
                    if (bVar8) {
                      return;
                    }
                    uVar4 = (uint)((ulonglong)&(pAVar20->fields).build_type >> 0xc);
                    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                    do {
                      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                      LOCK();
                      bVar8 = uVar6 == *puVar7;
                      if (bVar8) {
                        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar8);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

