// This file automatically generated by MOKO KSwift (https://github.com/icerockdev/moko-kswift)
//
import MultiPlatformLibrary

/**
 * selector: ClassContext/io.ktor:ktor-io/io/ktor/utils/io/errors/PosixException */
public enum PosixExceptionKs {

  case addressAlreadyInUseException(PosixException.AddressAlreadyInUseException)
  case badFileDescriptorException(PosixException.BadFileDescriptorException)
  case badMessageException(PosixException.BadMessageException)
  case connectionAbortedException(PosixException.ConnectionAbortedException)
  case connectionRefusedException(PosixException.ConnectionRefusedException)
  case connectionResetException(PosixException.ConnectionResetException)
  case interruptedException(PosixException.InterruptedException)
  case invalidArgumentException(PosixException.InvalidArgumentException)
  case noMemoryException(PosixException.NoMemoryException)
  case noSuchFileException(PosixException.NoSuchFileException)
  case notConnectedException(PosixException.NotConnectedException)
  case notSocketException(PosixException.NotSocketException)
  case overflowException(PosixException.OverflowException)
  case posixErrnoException(PosixException.PosixErrnoException)
  case timeoutIOException(PosixException.TimeoutIOException)
  case tryAgainException(PosixException.TryAgainException)

  public var sealed: PosixException {
    switch self {
    case .addressAlreadyInUseException(let obj):
      return obj as! MultiPlatformLibrary.PosixException
    case .badFileDescriptorException(let obj):
      return obj as! MultiPlatformLibrary.PosixException
    case .badMessageException(let obj):
      return obj as! MultiPlatformLibrary.PosixException
    case .connectionAbortedException(let obj):
      return obj as! MultiPlatformLibrary.PosixException
    case .connectionRefusedException(let obj):
      return obj as! MultiPlatformLibrary.PosixException
    case .connectionResetException(let obj):
      return obj as! MultiPlatformLibrary.PosixException
    case .interruptedException(let obj):
      return obj as! MultiPlatformLibrary.PosixException
    case .invalidArgumentException(let obj):
      return obj as! MultiPlatformLibrary.PosixException
    case .noMemoryException(let obj):
      return obj as! MultiPlatformLibrary.PosixException
    case .noSuchFileException(let obj):
      return obj as! MultiPlatformLibrary.PosixException
    case .notConnectedException(let obj):
      return obj as! MultiPlatformLibrary.PosixException
    case .notSocketException(let obj):
      return obj as! MultiPlatformLibrary.PosixException
    case .overflowException(let obj):
      return obj as! MultiPlatformLibrary.PosixException
    case .posixErrnoException(let obj):
      return obj as! MultiPlatformLibrary.PosixException
    case .timeoutIOException(let obj):
      return obj as! MultiPlatformLibrary.PosixException
    case .tryAgainException(let obj):
      return obj as! MultiPlatformLibrary.PosixException
    }
  }

  public init(_ obj: PosixException) {
    if let obj = obj as? MultiPlatformLibrary.PosixException.AddressAlreadyInUseException {
      self = .addressAlreadyInUseException(obj)
    } else if let obj = obj as? MultiPlatformLibrary.PosixException.BadFileDescriptorException {
      self = .badFileDescriptorException(obj)
    } else if let obj = obj as? MultiPlatformLibrary.PosixException.BadMessageException {
      self = .badMessageException(obj)
    } else if let obj = obj as? MultiPlatformLibrary.PosixException.ConnectionAbortedException {
      self = .connectionAbortedException(obj)
    } else if let obj = obj as? MultiPlatformLibrary.PosixException.ConnectionRefusedException {
      self = .connectionRefusedException(obj)
    } else if let obj = obj as? MultiPlatformLibrary.PosixException.ConnectionResetException {
      self = .connectionResetException(obj)
    } else if let obj = obj as? MultiPlatformLibrary.PosixException.InterruptedException {
      self = .interruptedException(obj)
    } else if let obj = obj as? MultiPlatformLibrary.PosixException.InvalidArgumentException {
      self = .invalidArgumentException(obj)
    } else if let obj = obj as? MultiPlatformLibrary.PosixException.NoMemoryException {
      self = .noMemoryException(obj)
    } else if let obj = obj as? MultiPlatformLibrary.PosixException.NoSuchFileException {
      self = .noSuchFileException(obj)
    } else if let obj = obj as? MultiPlatformLibrary.PosixException.NotConnectedException {
      self = .notConnectedException(obj)
    } else if let obj = obj as? MultiPlatformLibrary.PosixException.NotSocketException {
      self = .notSocketException(obj)
    } else if let obj = obj as? MultiPlatformLibrary.PosixException.OverflowException {
      self = .overflowException(obj)
    } else if let obj = obj as? MultiPlatformLibrary.PosixException.PosixErrnoException {
      self = .posixErrnoException(obj)
    } else if let obj = obj as? MultiPlatformLibrary.PosixException.TimeoutIOException {
      self = .timeoutIOException(obj)
    } else if let obj = obj as? MultiPlatformLibrary.PosixException.TryAgainException {
      self = .tryAgainException(obj)
    } else {
      fatalError("PosixExceptionKs not synchronized with PosixException class")
    }
  }

}