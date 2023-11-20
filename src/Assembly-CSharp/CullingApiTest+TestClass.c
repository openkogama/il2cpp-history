
/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::CullingApiTest+TestClass::CullingApiTest_TestClass_OnStateChanged
               (CullingApiTest_TestClass *this,CullingGroupEvent cullingGroupEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_cullingGroupEvent_);
    cRam_? = '\x01';
  }
  IStack_1.m_value =
       (int32_t)mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_ReadUnaligned_6
                          ((uint8_t *)&cullingGroupEvent,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_cullingGroupEvent_,pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    cullingGroupEvent._4_4_ = TypeInfo__UnityEngine__Debug;
    cullingGroupEvent.m_Index = (int32_t)&UNK_?;
    func_?();
  }
  cullingGroupEvent.m_PrevState = 0;
  cullingGroupEvent.m_ThisState = 0;
  cullingGroupEvent._6_2_ = 0;
  cullingGroupEvent.m_Index = (int32_t)pSVar2;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  return;
}

