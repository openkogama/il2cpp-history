
/* String BuildInvocationForArguments(String, Object[]) */

String * Assembly-CSharp.dll::JSBridge::JSBridge_BuildInvocationForArguments
                   (String *functionName,Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
  if (this != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (this,functionName,(MethodInfo *)0x0);
    pCVar1 = (this->fields).m_ChunkChars;
    if (pCVar1 == (Char__Array *)0x0) goto code_?;
    if ((this->fields).m_ChunkLength < (int)pCVar1->max_length) {
      uVar2 = (this->fields).m_ChunkLength;
      pCVar1 = (this->fields).m_ChunkChars;
      (this->fields).m_ChunkLength = uVar2 + 1;
      if (pCVar1 == (Char__Array *)0x0) goto code_?;
      if ((uint)pCVar1->max_length <= uVar2) goto code_?;
      pCVar1->vector[(int)uVar2] = 0x28;
    }
    else {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append(this,0x28,1,(MethodInfo *)0x0)
      ;
    }
    if (args == (Object__Array *)0x0) goto code_?;
    iVar3 = (int)args->max_length;
    uVar2 = 0;
    if (0 < iVar3) {
      ppOVar4 = args->vector;
      lVar5 = 0;
      do {
        if (lVar5 != 0) {
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this,::StringLiteral___,(MethodInfo *)0x0);
        }
        if ((uint)args->max_length <= uVar2) goto code_?;
        pSVar6 = JSBridge_ObjectToJSString(*ppOVar4,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this,pSVar6,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
        lVar5 = lVar5 + 1;
        ppOVar4 = ppOVar4 + 1;
      } while (lVar5 < iVar3);
    }
    pCVar1 = (this->fields).m_ChunkChars;
    if (pCVar1 == (Char__Array *)0x0) goto code_?;
    if ((this->fields).m_ChunkLength < (int)pCVar1->max_length) {
      uVar2 = (this->fields).m_ChunkLength;
      pCVar1 = (this->fields).m_ChunkChars;
      (this->fields).m_ChunkLength = uVar2 + 1;
      if (pCVar1 == (Char__Array *)0x0) goto code_?;
      if ((uint)pCVar1->max_length <= uVar2) goto code_?;
      pCVar1->vector[(int)uVar2] = 0x29;
    }
    else {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append(this,0x29,1,(MethodInfo *)0x0)
      ;
    }
    pCVar1 = (this->fields).m_ChunkChars;
    if (pCVar1 != (Char__Array *)0x0) {
      if ((this->fields).m_ChunkLength < (int)pCVar1->max_length) {
        uVar2 = (this->fields).m_ChunkLength;
        pCVar1 = (this->fields).m_ChunkChars;
        (this->fields).m_ChunkLength = uVar2 + 1;
        if (pCVar1 == (Char__Array *)0x0) goto code_?;
        if ((uint)pCVar1->max_length <= uVar2) {
code_?:
          FUN_?();
          pcVar7 = (code *)swi(3);
          pSVar6 = (String *)(*pcVar7)();
          return pSVar6;
        }
        pCVar1->vector[(int)uVar2] = 0x3b;
      }
      else {
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                  (this,0x3b,1,(MethodInfo *)0x0);
      }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar6 = (String *)
               (*(this->klass->vtable).ToString.methodPtr)
                         (this,(this->klass->vtable).ToString.method);
      return pSVar6;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar7)();
  return pSVar6;
}


/* Void DoKGMEval(String) */

void Assembly-CSharp.dll::JSBridge::JSBridge_DoKGMEval(String *str,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Attempting_to_use_js_eval_in_non);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)str,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_Attempting_to_use_js_eval_in_non;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar2 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,2,pSVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ExternalCall(String, Object[]) */

void Assembly-CSharp.dll::JSBridge::JSBridge_ExternalCall
               (String *functionName,Object__Array *args,MethodInfo *method)

{
  pSVar1 = JSBridge_BuildInvocationForArguments(functionName,args,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Attempting_to_use_js_eval_in_non);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_Attempting_to_use_js_eval_in_non;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar2 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,2,pSVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ExternalEval(String) */

void Assembly-CSharp.dll::JSBridge::JSBridge_ExternalEval(String *script,MethodInfo *method)

{
  if (script == (String *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (0 < (script->fields)._stringLength) {
    uVar2 = (script->fields)._stringLength;
    if ((uint)(script->fields)._stringLength <= uVar2 - 1) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                ((MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(short *)((longlong)&(script->fields)._stringLength + (ulonglong)uVar2 * 2 + 2) != 0x3b) {
      pSVar3 = (String *)FUN_?(uRam_?);
      pSVar4 = (String *)0x0;
      if (pSVar3 != (String *)0x0) {
        if (pSVar3->klass == pSRam0000000182dc2f60) {
          pSVar4 = pSVar3;
        }
        if (pSVar4 == (String *)0x0) {
          FUN_?(pSVar3,pSRam0000000182dc2f60);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      script = mscorlib.dll::System::String::String_Concat_4(script,pSVar4,(MethodInfo *)0x0);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Attempting_to_use_js_eval_in_non);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)script,(MethodInfo *)0x0);
  pSVar4 = StringLiteral_Attempting_to_use_js_eval_in_non;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar5 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar5 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar5,2,pSVar4);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* String ObjectToJSString(Object) */

String * Assembly-CSharp.dll::JSBridge::JSBridge_ObjectToJSString(Object *o,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__ICollection);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IList);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u2028);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u2029);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_null);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__n);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral_____);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__r);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000D);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_new_Array_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (o == (Object *)0x0) {
    return StringLiteral_null;
  }
  pOVar1 = (Object *)0x0;
  pOVar2 = pOVar1;
  if (o->klass == pORam0000000182dc2f60) {
    pOVar2 = o;
  }
  if (pOVar2 == (Object *)0x0) {
    pOVar2 = pOVar1;
    if (o->klass == pORam0000000182dc2f18) {
      pOVar2 = o;
    }
    if (pOVar2 == (Object *)0x0) {
      pOVar2 = pOVar1;
      if (o->klass == pORam0000000182dc2f08) {
        pOVar2 = o;
      }
      if (pOVar2 == (Object *)0x0) {
        pOVar2 = pOVar1;
        if (o->klass == pORam0000000182dc2f20) {
          pOVar2 = o;
        }
        if (pOVar2 == (Object *)0x0) {
          pOVar2 = pOVar1;
          if (o->klass == pORam0000000182dc2f10) {
            pOVar2 = o;
          }
          if (pOVar2 == (Object *)0x0) {
            pOVar2 = pOVar1;
            if (o->klass == pORam0000000182dc2ee8) {
              pOVar2 = o;
            }
            if (pOVar2 == (Object *)0x0) {
              pOVar2 = pOVar1;
              if (o->klass == pORam0000000182dc2f48) {
                pOVar2 = o;
              }
              if (pOVar2 != (Object *)0x0) {
                if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::
                         CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                if (pCVar3 != (CultureInfo *)0x0) {
                  pIVar4 = (IFormatProvider *)
                           (*(pCVar3->klass->vtable).get_NumberFormat.methodPtr)
                                     (pCVar3,(pCVar3->klass->vtable).get_NumberFormat.method);
                  if ((o->klass->_0).element_class == (pORam0000000182dc2f48->_0).element_class) {
                    DStackX_8.m_value._0_4_ = *(undefined4 *)&o[1].klass;
                    pSVar5 = mscorlib.dll::System::Single::Single_ToString_1
                                       ((Single *)&DStackX_8,pIVar4,(MethodInfo *)0x0);
                    return pSVar5;
                  }
                  FUN_?(o,pORam0000000182dc2f48);
                  pcVar6 = (code *)swi(3);
                  pSVar5 = (String *)(*pcVar6)();
                  return pSVar5;
                }
code_?:
                FUN_?();
                pcVar6 = (code *)swi(3);
                pSVar5 = (String *)(*pcVar6)();
                return pSVar5;
              }
              pOVar2 = pOVar1;
              if (o->klass == pORam0000000182dc2f50) {
                pOVar2 = o;
              }
              if (pOVar2 != (Object *)0x0) {
                if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::
                         CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                if (pCVar3 != (CultureInfo *)0x0) {
                  pIVar4 = (IFormatProvider *)
                           (*(pCVar3->klass->vtable).get_NumberFormat.methodPtr)
                                     (pCVar3,(pCVar3->klass->vtable).get_NumberFormat.method);
                  if ((o->klass->_0).element_class == (pORam0000000182dc2f50->_0).element_class) {
                    DStackX_8.m_value = (double)o[1].klass;
                    pSVar5 = mscorlib.dll::System::Double::Double_ToString_2
                                       (&DStackX_8,pIVar4,(MethodInfo *)0x0);
                    return pSVar5;
                  }
                  FUN_?(o,pORam0000000182dc2f50);
                  pcVar6 = (code *)swi(3);
                  pSVar5 = (String *)(*pcVar6)();
                  return pSVar5;
                }
                goto code_?;
              }
              pOVar2 = pOVar1;
              if (o->klass == pORam0000000182dc2f58) {
                pOVar2 = o;
              }
              if (pOVar2 != (Object *)0x0) {
                if ((o->klass->_0).element_class != (pORam0000000182dc2f58->_0).element_class) {
                  FUN_?(o);
                  pcVar6 = (code *)swi(3);
                  pSVar5 = (String *)(*pcVar6)();
                  return pSVar5;
                }
                if (*(short *)&o[1].klass == 0x22) {
                  return ::StringLiteral_____;
                }
                if ((*(int *)&(pORam0000000182dc2f58->_1).field_0x1c == 0) &&
                   (FUN_?(pORam0000000182dc2f58),
                   *(int *)&(pORam0000000182dc2f58->_1).field_0x1c == 0)) {
                  FUN_?(pORam0000000182dc2f58);
                }
                pSVar5 = mscorlib.dll::System::Char::Char_ToString_2(0x22,(MethodInfo *)0x0);
                pSVar7 = (String *)
                         (*(o->klass->vtable).ToString.methodPtr)
                                   (o,(o->klass->vtable).ToString.method);
                goto code_?;
              }
              lVar8 = FUN_?(o,TypeInfo__System__Collections__IList);
              pIVar9 = TypeInfo__System__Collections__IList;
              if (lVar8 == 0) {
                pOVar2 = (Object *)(*(o->klass->vtable).ToString.methodPtr)(o);
                pSVar5 = JSBridge_ObjectToJSString(pOVar2,(MethodInfo *)0x0);
                return pSVar5;
              }
              lVar8 = FUN_?();
              if (lVar8 == 0) {
                FUN_?(o,pIVar9);
                pcVar6 = (code *)swi(3);
                pSVar5 = (String *)(*pcVar6)();
                return pSVar5;
              }
              o = (Object *)FUN_?(TypeInfo__System__Text__StringBuilder);
              mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor
                        ((StringBuilder *)o,(MethodInfo *)0x0);
              if ((StringBuilder *)o == (StringBuilder *)0x0) goto code_?;
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                        ((StringBuilder *)o,StringLiteral_new_Array_,(MethodInfo *)0x0);
              iVar10 = FUN_?(1,TypeInfo__System__Collections__ICollection);
              if (0 < iVar10) {
                do {
                  if ((int)pOVar1 != 0) {
                    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                              ((StringBuilder *)o,::StringLiteral___,(MethodInfo *)0x0);
                  }
                  pOVar2 = (Object *)
                           FUN_?(0,TypeInfo__System__Collections__IList,lVar8,pOVar1);
                  pSVar5 = JSBridge_ObjectToJSString(pOVar2,(MethodInfo *)0x0);
                  mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                            ((StringBuilder *)o,pSVar5,(MethodInfo *)0x0);
                  uVar11 = (int)pOVar1 + 1;
                  pOVar1 = (Object *)(ulonglong)uVar11;
                } while ((int)uVar11 < iVar10);
              }
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                        ((StringBuilder *)o,::StringLiteral__,(MethodInfo *)0x0);
            }
          }
        }
      }
    }
    pSVar5 = (String *)
             (*(((StringBuilder *)o)->klass->vtable).ToString.methodPtr)
                       (o,(((StringBuilder *)o)->klass->vtable).ToString.method);
  }
  else {
    if ((*(int *)&(pORam0000000182dc2f58->_1).field_0x1c == 0) &&
       (FUN_?(), *(int *)&(pORam0000000182dc2f58->_1).field_0x1c == 0)) {
      FUN_?();
    }
    pSVar5 = mscorlib.dll::System::Char::Char_ToString_2(0x22,(MethodInfo *)0x0);
    pSVar7 = (String *)
             (*(o->klass->vtable).ToString.methodPtr)(o,(o->klass->vtable).ToString.method);
    if (((((pSVar7 == (String *)0x0) ||
          (pSVar7 = mscorlib.dll::System::String::String_Replace_1
                              (pSVar7,::StringLiteral__,::StringLiteral___,(MethodInfo *)0x0),
          pSVar7 == (String *)0x0)) ||
         (pSVar7 = mscorlib.dll::System::String::String_Replace_1
                             (pSVar7,::StringLiteral__,::StringLiteral___,(MethodInfo *)0x0),
         pSVar7 == (String *)0x0)) ||
        ((pSVar7 = mscorlib.dll::System::String::String_Replace_1
                             (pSVar7,StringLiteral_u000A,StringLiteral__n,(MethodInfo *)0x0),
         pSVar7 == (String *)0x0 ||
         (pSVar7 = mscorlib.dll::System::String::String_Replace_1
                             (pSVar7,StringLiteral_u000D,StringLiteral__r,(MethodInfo *)0x0),
         pSVar7 == (String *)0x0)))) ||
       ((pSVar7 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar7,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
        pSVar7 == (String *)0x0 ||
        (pSVar7 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar7,StringLiteral_u2028,::StringLiteral__,(MethodInfo *)0x0),
        pSVar7 == (String *)0x0)))) goto code_?;
    pSVar7 = mscorlib.dll::System::String::String_Replace_1
                       (pSVar7,StringLiteral_u2029,::StringLiteral__,(MethodInfo *)0x0);
code_?:
    pSVar5 = mscorlib.dll::System::String::String_Concat_5
                       (pSVar5,pSVar7,::StringLiteral__,(MethodInfo *)0x0);
  }
  return pSVar5;
}

